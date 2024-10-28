#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
struct Node *Top = NULL, *temp = NULL, *p = NULL;
void push()
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter data for  New node: ");
    scanf("%d", &temp->data);
    temp->Next = NULL;
    if (Top == NULL)
    {
        Top = temp;
    }
    else
    {
        temp->Next = Top;
        Top = temp;
    }
}
void pop()
{
    if (Top == NULL)
    {
        printf("\nLink List is Empty ");
    }
    p = Top;
    printf("\ndeleted %d", p->data);
    Top = Top->Next;
    free(p);
}
void display()
{
    if (Top == NULL)
    {
        printf("\nNo Link List Available ");
    }
    p = Top;
    while (p != NULL)
    {
        printf("\nData:%d ", p->data);
        p = p->Next;
    }
}
int main()
{

    int choice = 1;
    while (choice != 0)
    {
        printf("\n*****Menu********");
        printf("\n1. For Creating New NOde.");
        printf("\n2. For Deletion of Node. ");
        printf("\n3. Display.");
        printf("\n0. Exit");
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        case 0:
            break;
        default:
            printf("Invalid Choice");
        }
    }
    printf("\nEnd of Program");
    return 0;
}