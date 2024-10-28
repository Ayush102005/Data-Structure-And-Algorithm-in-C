#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main()
{
    int n;
    struct Node* temp,*head=NULL,*P;
    printf("Enter no.of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter a Data:\n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            P=head;
            while(P->next!=NULL)
            {
                P=P->next;
            }
            P->next=temp;
        }
    }
    P=head;
    while (P!=NULL)
    {
        printf("Elements :%d\n",P->data);
        P=P->next;
    }
    
}