#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};
struct Node *Head = NULL, *temp = NULL, *p = NULL, *tail = NULL;
void create()
{
    int i, n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        if (temp == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }
        printf("Enter the data for Node %d: ", i + 1);
        scanf("%d", &temp->data);
        temp->next = NULL;
        temp->previous = NULL;
        if (Head == NULL)
        {
            Head = temp;
        }
        else
        {
            tail->next = temp;
            temp->previous = tail;
        }
        tail = temp;
    }
}
void addfront()
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    if (Head == NULL)
    {
        tail = temp;
    }
    else
    {
        temp->next = Head;
        Head->previous = temp;
        Head = temp;
    }
    Head = temp;
}
void addrear()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (Head == NULL)
    {
        temp->previous = NULL;
        Head = temp;
    }
    else
    {
        tail->next = temp;
        temp->previous = tail;
    }
    tail = temp;
}

void deletefront()
{
    if (Head == NULL)
    {
        printf("NO LINKED LIST.");
    }
    else
    {
        p = Head;
        printf("Deleted data: %d", p->data);
        Head = Head->next;
        if (Head != NULL)-]

            {
                Head->previous = NULL;
            }
        else
        {
            tail = NULL;
        }
        free(p);
    }
}
void deleterear()
{
    if (tail == NULL)
    {
        printf("NO LINKED LIST");
    }
    else
    {
        p = tail;
        tail = p->previous;
        if (tail != NULL)
        {
            tail->next = NULL;
        }
        else
        {
            Head = NULL;
        }
        free(p);
    }
}
void delpos(int pos)
{
    if (Head == NULL)
    {
        printf("NO LINKED LIST");
    }
    else
    {
        p = Head;
        for (i = 1; i < pos; i++)
        {
            p = p->next;
        }
        if (p->next != NULL)
        {
            p->next->previous = p->previous;
        }
        else
        {
            tail = p->previous;
        }
        if (p->previous != NULL)
        {
            p->previous->next = p->next;
        }
        else
        {
            Head = p->next;
        }
        if (p->next == NULL && p->previous == NULL)
        {
            Head = NULL;
            tail = NULL;
        }
        free(p)
    }
}
void displayfront()
{
    if (Head == NULL)
    {
        printf("\nNo Link List Available ");
    }
    p = Head;
    while (p != NULL)
    {
        printf("\nData:%d ", p->data);
        p = p->next;
    }
}
void displayrear()
{
    if (tail == NULL)
    {
    }
}
int main()
{
    int choice = 1;
    while (choice != 0)
    {
        printf("\n*****Menu********");
        printf("\n1. Create New List");
        printf("\n2. Add new data at the front");
        printf("\n3. Add new data at the rear");
        printf("\n4. Delete data from the front ");
        printf("\n5. Delete data from the rear");
        printf("\n6.  Display status of DLL");
        printf("\n0. Exit");
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            addfront();
            break;
        case 3:
            addrear();
            break;
        case 4:
            deletefront();
            break;
        case 5:
            deleterear();
            break;
        case 6:
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
