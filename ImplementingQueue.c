#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
struct Node *Front = NULL, *rear = NULL, *temp = NULL, *p = NULL;
void enqueue()
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter data for  New node: ");
    scanf("%d", &temp->data);
    temp->Next = NULL;
    if (Front == NULL)
    {
        Front = temp;
        rear = temp;
    }
    else
    {
        p = rear;
        while (p->Next != NULL)
        {
            p = p->Next;
        }
        p->Next = temp;
    }
}
void dequeue()
{
    if (Front == NULL)
    {
        printf("\nLink List is Empty ");
    }
    p = Front;
    printf("\ndeleted %d", p->data);
    Front = Front->Next;
    free(p);
}
void display()
{
    if (Front == NULL)
    {
        printf("\nNo Link List Available ");
    }
    p = Front;
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
            enqueue();
            break;
        case 2:
            dequeue();
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