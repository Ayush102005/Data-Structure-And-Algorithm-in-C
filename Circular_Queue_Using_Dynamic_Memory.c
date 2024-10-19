#include<stdio.h>
#include<stdlib.h>
int *queue;
int capacity,rear,front;
void enqueue(int n){
    if(front==(rear+1)%capacity){
        printf("Queue is Overflow\n");
    }
    else{
        if(front==-1)
        {
            front++;
            rear++;
            queue[rear]=n;
        }
        else
        {
            rear=(rear+1)%capacity;
            queue[rear]=n;
        }
    }
}
void dequeue(){
    if(front==-1)
    {
        printf("Queuue Underflow\n");
    }
    else{
        if(front==rear){
            printf("Dequeue: %d\n",queue[front]);
            front=-1;
            rear=-1;
        }
        else{
            printf("Dequeue: %d\n",queue[front]);
            front=(front+1)%capacity;
        }
    }
}
void display(){
    printf("The Elements of the Queue Are: ");
    int i=front;
    if(i<0){
        printf("Queue Empty");
    }
    else{
        while(i!=rear){
            printf("%d\n",queue[i]);
            i=(i+1)%capacity;
        }
        printf("%d\n",queue[i]);
    }
}
int main()
{
    printf("Enter the Size of queue: ");
    scanf("%d",&capacity);
    queue=(int*)malloc(capacity*sizeof(int));
    if(queue==NULL){
        printf("Memory is not allocated\n");
    }
    front=-1;
    rear=-1;
    enqueue(45);
    enqueue(18);
    enqueue(7);
    enqueue(10);
    enqueue(9);
    enqueue(49);
    dequeue();
    display();
}