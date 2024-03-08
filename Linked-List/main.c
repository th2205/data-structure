#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node
{
    int data;
    struct Node *next; // next node pointer
} Node;

// set head pointer
Node *head = NULL;

void insert(int data)
{
    // (Node *) -> pointer type casting void to Node
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;

        return;
    }

    Node *cur = head;

    // find last node
    while (cur->next != NULL)
    {
        cur = cur->next;
    }

    cur->next = newNode;

    return;
}

void print()
{
    Node *cur = head;

    while (cur != NULL)
    {
        printf("%d\n", cur->data);
        cur = cur->next;
    }

    return;
}

int main()
{
    printf("Linked List\n");
    printf("\n");

    insert(1);
    insert(2);
    insert(3);

    printf("Print Linked List\n");
    print();

    return 0;
}