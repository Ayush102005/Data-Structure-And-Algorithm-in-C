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

int push(struct stack *s, int val)
{
    if (isFull(s))
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
        printf("Push: %d\n",s->arr[s->top]);
    }
}

int pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        printf("Pop: %d\n", s->arr[s->top]);
        s->top--;
    }
}

int peek(struct stack *s, int i)
{
    if (i < 1 || i > s->top + 1)
    {
        printf("INVALID INDEX\n");
        return -1;
    }
    else
    {
        return s->arr[s->top - i + 1];
    }
}

void display(struct stack *s)
{
    for (int i = s->top; i >= 0; i--)
    {
        printf("Element After Push: %d\n", s->arr[i]);
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 11;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("STACK HAS BEEN CREATED SUCCESSFULLY !!!\n");
    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));
    push(s, 99);
    push(s, 98);
    push(s, 88);
    push(s, 77);
    push(s, 66);
    push(s, 55);
    push(s, 44);
    push(s, 33);
    push(s, 22);
    push(s, 11);
    push(s, 100);
    printf("AFTER PUSH \n");
    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));
    display(s);
    for(int j=1;j<=s->top+1;j++)
    {
        printf("THE ELEMENT AT INDEX %d IS %d\n",j,peek(s,j));
    }

    return 0;
}
    //printf("%d\n", isFull(s));

   /* pop(s, 98);
    pop(s, 88);
    pop(s, 77);
    pop(s, 66);
    pop(s, 55);
    pop(s, 44);
    pop(s, 33);
    pop(s, 22);
    pop(s, 11);
    printf("AFTER POP \n");
    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));
    display(s);*/
   