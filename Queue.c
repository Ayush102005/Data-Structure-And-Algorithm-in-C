#include<stdio.h>
#define MAX 10
int queue[MAX];
int front,rear;
int enqueue(int n)
{
    if(rear>=MAX-1)
    {
        printf("Overflow");
    }
    if(front==-1)
    {
        front++;
        rear++;
        queue[rear]=n;
    }
    else{
        rear++;
        queue[rear]=n;
    }
}
int dequeue()
{
    if(rear==-1&&front==-1)
    {
        printf("Underflow");
    }
    else{
        printf("Dequeue: %d",queue[front]);
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
    }
}
void display(){
    printf("\nThe Elements of the Queue Are: ");
    for(int i=0;i<=MAX-1;i++)
    printf("%d\n",queue[i]);
}
int main(){
    rear=-1;
    front=-1;
    enqueue(12);
    enqueue(45);
    enqueue(54);
    display();
    dequeue();
    display();


}
