#ifndef STACKADS_H_INCLUDED
#define STACKADS_H_INCLUDED

typedef struct Stack Stack;

Stack *createStack(); //Creates stack
int isStackEmpty(Stack *s); //Checks if stack is empty
void pushToStack(Stack *s, void *e ,unsigned long int size); //Pushes x element to stack
void *popFromStack(Stack *s); //Takes an element from stack
void deleteStack(Stack *s); //Clears and frees stack

#endif // STACKADS_H_INCLUDED
