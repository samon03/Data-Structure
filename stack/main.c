#include <stdio.h>
#include <stdlib.h>
#define m 2

int top = -1;
int stack[m];
void push(int x)
{
  if(top+1 > m)
  {
    printf("Overflow");
  }
  else
  {
      top = top + 1;
      stack[top] = x;
  }
}
int pop()
{
    if(top == -1)
    {
        printf("Underflow");
    }
    else
    {
        int x = stack[top];
        printf("Poped: %d \n", x);
        stack[top] = 0;
        top = top - 1;
    }

}
int main()
{
    int p, q, r;
    p = 10;
    q = 20;
    r = 30;
    push(p);
    push(q);
    push(r);
    printf("%d %d %d\n", p, q, r);
    pop();
    pop();
    pop();

    return 0;
}
