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

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void insert(Node *node)
{
    // (Node *) -> pointer type casting void to Node

    if (head == NULL)
    {
        head = node;

        return;
    }

    Node *cur = head;

    // find last node
    while (cur->next != NULL)
    {
        cur = cur->next;
    }

    cur->next = node;

    return;
}

void insertNode(Node *prev, int data)
{
    Node *newNode = createNode(data);
    Node *nextNode = prev->next;

    if (nextNode == NULL)
    {
        prev->next = newNode;

        return;
    }

    prev->next = newNode;
    newNode->next = nextNode;

    return;
}

void deleteNode()
{
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

    Node *first = createNode(1);
    Node *second = createNode(2);
    Node *third = createNode(3);

    insert(first);
    insert(second);
    insert(third);
    insertNode(second, 4);

    printf("Print Linked List\n");
    print();

    return 0;
}
