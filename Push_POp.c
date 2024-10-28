#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *s)
{
    if (s->top == -1)
        return 1; 
    else
        return 0;
}

int isFull(struct stack *s)
{
    if (s->top >= s->size - 1)
        return 1;
    else
        return 0; 
}
void push(struct stack *s, int val)
{
    if (isFull(s))
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}
void pop(struct stack *s, int val)
{
    if (isEmpty(s))
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        s->top--;
        s->arr[s->top] = val;
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("STACK HAS BEEN CREATED SUCCESSFULLY !!!\n");
    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));
    push(s, 98);
    printf("AFTER PUSH\n");
    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));
}