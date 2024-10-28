#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int stacktop(struct stack *s)
{
    return s->arr[s->top];
}

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

char pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}

void push(struct stack *s, char val)
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

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}

int precedence(char ch)
{
    if (ch == '/' || ch == '*')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}

char *infixpostfix(char *infix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            while (!isEmpty(s) && precedence(infix[i]) <= precedence(stacktop(s)))
            {
                postfix[j] = pop(s);
                j++;
            }
            push(s, infix[i]);
            i++;
        }
    }
    while (!isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "x-y/z-k*d";
    char *postfix = infixpostfix(infix);
    printf("postfix is %s\n", postfix);
    free(postfix);
    return 0;
}