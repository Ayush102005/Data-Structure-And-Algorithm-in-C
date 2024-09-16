#include<stdio.h>
int max=10;
int stack[10];
int top=-1;
void push()
{
    top++;
    if(top>=max)
    {
        printf("overflow");
    }
    else
    {
      printf("enter data\n");
      scanf("%d",&stack[top]);

    }
}
void pop()
{
    if(top<=-1)
    {
        printf("underflow");
    }
    else{
        printf("%d",stack[top]);
        top--;
    }
}
int main()
{
    void push();
    void push();
    void push();
    void pop();
    void pop();
    void push();
    printf("%d",top);
}
