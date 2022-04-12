#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "StackADS.h"

typedef struct Node
{
    void* data;
    struct Node* next;
}Node;

struct Stack
{
    unsigned long size;
    Node *top;
};

Stack *createStack()
{
    Stack *s = malloc(sizeof(Stack));

    if(s !=  NULL){
        s->top = NULL;
        s->size = 0;
    }

    return s;
}

int isStackEmpty(Stack *s)
{
    return s->top == NULL;
}

void pushToStack(Stack *s, void *e ,unsigned long int size)
{
    Node* node = NULL;
    node = malloc(sizeof(Node));

    if (!node)
    {
        printf("Heap Overflow\n");
        exit(EXIT_FAILURE);
    }

    void *data = malloc(size);
    memcpy(data, e, size);

    node->data = data;
    if(s->top == NULL){
        node->next = NULL;
    }
    else{
        node->next = s->top;
    }

    s->top = node;
}

void * popFromStack(Stack* s)
{
    Node *node = malloc(sizeof(Node));

    if (s->top == NULL)
    {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }

    void *x = s->top->data;

    node = s->top;

    s->top = s->top->next;

    free(node);

    return x;
}

void deleteStack(Stack *s)
{
    while (s->top) {
        Node *temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
    s->top = NULL;
}

