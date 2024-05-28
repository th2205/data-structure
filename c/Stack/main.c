#include <stdio.h>
#include <stdbool.h>

const STACK_SIZE = 10;

typedef struct
{
    int data[STACK_SIZE];
    int top;
} Stack;

void init_stack(Stack *stack)
{
    stack->top = -1;
}

bool is_empty()
{
    return true;
}

bool is_full()
{
    return true;
}

int push(int data)
{
    return 0;
}

int pop(int data)
{
    return 0;
}