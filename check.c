

#include<stdio.h>
#include<stdlib.h>
int capacity=5;
int *queue;
int front;
int rear;
void display(){
	int i;
	printf("\nQueue Elements Are :");
	if(front==-1){
		printf("Queue Empty");
	}
	else{
		if(front>rear){
		for(i=front;i<capacity;i++){
			printf("%d ",queue[i]);
		}
		for(i=0;i<=rear;i++){
			printf("%d ",queue[i]);
		}	
	}
	else{
		for(i=front;i<=rear;i++){
			printf("%d ",queue[i]);
		}
	}	
	}
	
}

void enqueue(int n){
	int j,temp,i;
	if(front==(rear+1)%capacity){
		printf("\nQueue Overload");
	}
	else{
		if(front==-1){
			front++;
			rear++;
			queue[rear]=n;
			printf("\nEnqueue=%d",n);
		}
		else{
			rear=(rear+1)%capacity;
			queue[rear]=n;
			printf("\nEnqueue=%d",n);
			j=rear;
			if(j<front){
				for(i=j-1;i>=0;i--){
					if(queue[i]<queue[j]){
						temp=queue[i];
						queue[i]=queue[j];
						queue[j]=temp;
						j=i;
					}
				}
				for(i=capacity-1;i>=front;i--){
					if(queue[i]<queue[j]){
						temp=queue[i];
						queue[i]=queue[j];
						queue[j]=temp;
						j=i;
					}
				}
			}
			else{
				for(i=rear-1;i>=front;i--){
					if(queue[i]<queue[j]){
						temp=queue[i];
						queue[i]=queue[j];
						queue[j]=temp;
						j=i;
					}
				}
			}
		}
	}
}
void dequeue(){
	if(front==-1){
		printf("\nQueue Underflow");
	}
	else{
		if(front==rear)
		{
			printf("\nDequeue=%d",queue[front]);
			front=-1;
			rear=-1;
		}
		else{
			printf("\nDequeue=%d",queue[front]);
			front=(front+1)%capacity;
			
		}
	}
}
int main(){
	front=-1;
	rear=-1;
	queue=(int *)malloc(capacity*sizeof(int));
	if(queue==NULL){
		printf("memory Not allocated");	
	}
	enqueue(30);
	enqueue(20);
	enqueue(10);
	enqueue(15);
	enqueue(50);
	display();
	enqueue(60);
	dequeue();
	dequeue();
	dequeue();
	enqueue(70);
    display();
	dequeue();
	display();
	dequeue();
	dequeue();
	dequeue();
	display();
	enqueue(45);
	display();
	return 0;
}
