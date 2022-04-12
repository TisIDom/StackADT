# Stack ADT implementation

Before you begin to use the ADT, you must initialize the stack using createStack() function.
After doing that you can use the stack to push, pop or whatever your heart desires.

Example program given below:

    int main()
    {
      Stack *s = createStack();

      int a = 1;
      int b = 2;
      int c = 3;

      pushToStack(s, &a, sizeof(a));
      pushToStack(s, &b, sizeof(a));
      pushToStack(s, &c, sizeof(a));

      *a = popFromStack(s);
      *b = popFromStack(s);
      *c = popFromStack(s);

      if (isStackEmpty(s)) {
          printf("The stack is empty\n");
      }
      else {
          printf("The stack is not empty\n");
      }

      deleteStack(s);

      return 0;
    }
