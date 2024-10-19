#include<stdio.h>
#define MAX 5
int queue[MAX];
int front,rear,temp;
int enqueue(int n)
{
if(front==-1)
{
    front++;
    rear++;
    queue[rear]=n;
    printf("Enqueue: %d\n",queue[rear]);
    
}
else if((rear+1)%MAX==front)
{
    printf("Overflow\n");
}
else
{
    rear=(rear+1)%MAX;
    queue[rear]=n;
    printf("Enqueue: %d\n",queue[rear]);

for(int j=0;j<=rear-1%MAX;j++)
    {
        if(queue[rear-j]>queue[rear-j-1])
        {
            temp=queue[rear-j];
            queue[rear-j]=queue[rear-j-1];
            queue[rear-j-1]=temp;
        }
    }
}
}
int dequeue()  
{
    if(rear==-1&&front==-1)
    {
        printf("Underflow\n");
    }
    else{
        if(front==rear)
        {
            printf("Dequeue: %d\n",queue[front]);
            front=-1;
            rear=-1;
        }
        else{
            printf("Dequeue: %d\n",queue[front]);
            front=(front+1)%MAX;
        }
    }
}
void display(){
    printf("\nThe Elements of the Queue Are: ");
    int i=front;
    if(i<0){
        printf("Queue Empty");
    }
    else{
    while(i!=rear){
       printf("%d\n",queue[i]);
       i=(i+1)%MAX;
    }
   printf("%d\n",queue[i]);
}
}
int main(){
    rear=-1;
    front=-1;
    enqueue(89);
    enqueue(11);
    enqueue(36);
    enqueue(95);
    enqueue(24);
    enqueue(9);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(50);
    display();

    

}
