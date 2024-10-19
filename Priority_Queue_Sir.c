#include<stdio.h>
#define MAX 5
int queue[MAX];
int front,rear;
int i;
int enqueue(int n)
{
    if(rear+1%MAX==front)
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
        rear=(rear+1)%MAX;
        queue[rear]=n;
    }
    int j=rear;
    if(rear<front){
        for(i=rear;i=0;i--){
            if(queue[i]<queue[j]){
                int temp=queue[i];
                queue[i]=queue[j];
                queue[j]=temp;
                j=i;
            }
        }
    }
    else{
        for(i=rear-1;i>=front;i--){
           int temp=queue[i];
                queue[i]=queue[j];
                queue[j]=temp;
                j=i;  
        }
    }
}
int dequeue()
{
    if(rear==-1&&front==-1)
    {
        printf("Underflow");
    }
    else{
        if(front==rear)
        {
            printf("%d",queue[front]);
            front=-1;
            rear=-1;
        }
        else{
            printf("%d\n",queue[front]);
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
    enqueue(96);
    enqueue(12);
    enqueue(11);
    enqueue(85);
    display();

}