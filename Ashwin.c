#include<stdio.h>
#define MAX 10
int queue[MAX],front,rear;
int enqueue(int n)
{
    if ((rear+1)%MAX==front)
    {
        printf("Overflow");
    }
    if(front==-1)
    {
        front++;
        rear++;
        queue[rear]=n;
    }
    else
    {
        rear=(rear+1)%MAX;
        queue[rear]=n;
    }
    return 0;
}
int dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("Underflow");
    }
    else
    {
        if (rear==front)
        {
            printf("%d",queue[front]);
            rear=-1;
            front=-1;
        }
        else
        {
            printf("%d\n",queue[front]);
            front=(front+1)%MAX;
        }    
    }
    return 0;
}
int display()
{
   

}
int main()
{
    rear=-1;
    front=-1;
    enqueue(12);
    enqueue(13);
    enqueue(14);
    dequeue();
    dequeue();
    display();
    return 0;
}