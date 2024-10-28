#include <stdio.h>
#include <stdlib.h>
struct Node *temp, *Head = NULL, *p;
struct Node
{
    /* data */
    int coff;
    int exp;
    struct Node *Next;
};
void createpoly(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the coefficient and exponent of term %d: ", i + 1);
        scanf("%d%d", &temp->coff, &temp->exp);
        temp->Next = NULL;
        if (Head == NULL)
        {
            Head = temp;
        }
        else
        {
            p = Head;
            while (p->Next != NULL)
            {
                p = p->Next;
            }
            p->Next = temp;
        }
    }
}
void display()
{
    p = Head;
    printf("\n polynomial= ");
    printf("%dx^%d", p->coff, p->exp);
    p = p->Next;
    while (p)
    {
        printf("+%dx^%d", p->coff, p->exp);
        p = p->Next;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);
    createpoly(n);
    display();
    return 0;
}