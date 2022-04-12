/*

Stack ADT implementation

Before you begin to use the ADT, you must declare the pointer *top in your main() function like this "Node *top = NULL;".
Then you must create the stack using createStack() function.
After doing that you can use the stack to push, pop or whatever your heart desires.

Example program given below:

int main()
{

    Node *top = NULL;

    createStack(&top);

    pushToStack(&top, 1);
    pushToStack(&top, 2);
    pushToStack(&top, 3);

    printf("%d\n",popFromStack(&top));
    printf("%d\n",popFromStack(&top));
    printf("%d\n",popFromStack(&top));

    if (isStackEmpty(top)) {
        printf("The stack is empty\n");
    }
    else {
        printf("The stack is not empty\n");
    }

    clearStack(&top);
    return 0;
}

*/

#ifndef STACKADS_H_INCLUDED
#define STACKADS_H_INCLUDED
typedef struct Stack Stack;

Stack *createStack(); //Creates stack
int isStackEmpty(Stack *s); //Checks if stack is empty
void pushToStack(Stack *s, void *e ,unsigned long int size); //Pushes x element to stack
void * popFromStack(Stack* s); //Takes an element from stack
void clearStack(Stack *s); //Clears and frees stack


#endif // STACKADS_H_INCLUDED
