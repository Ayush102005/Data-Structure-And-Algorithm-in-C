#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
int queue[MAX];
int front, rear;
int enqueue(int n)
{
    int i,j,temp;
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
    return 0;
}
else
{
    rear=(rear+1)%MAX;
    queue[rear]=n;
    printf("Enqueue: %d\n",queue[rear]);
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
				for(i=MAX-1;i>=front;i--){
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
int dequeue()  
{
    if(rear==-1&&front==-1)
    {
        printf("Underflow\n");
    }
    else{
        if(front==rear)
        {
            printf("Dequeue: %d \n",queue[front]);
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
int main()
{
    int n,m,o,p;
    char op;
     rear=-1;
     front=-1; 
    printf("Ayush Kumar Singh");
    printf("\nUSN-1AY23CS048");
    do{
        printf("\nEnter The Process You Want to Execute: \n 1.For Enqueue.\n 2.For Dequeue.\n 3.For Display.\n 4.For Exit. \n");
        scanf(" %c",&op);
        switch(op){
            case '1':printf("Enter the No.Of element you want To Include: \n");
            scanf("%d",&m);
                printf("Enter the element you want to insert : \n");
                 for(int j=0;j<m;j++)
                {
                    scanf("%d",&p);
                    enqueue(p);
                }

            break;
            case '2':printf("Enter the No.Of element you want To Delete: ");
                 scanf("%d",&o);
                 for(int i=0;i<o;i++)
                 {
                    dequeue();
                 }
               break;
            case '3':display();
              break; 
            case '4':printf("Process Terminated");
            exit(0);
            default:printf("Enter Valid Process\n");     
        }

    }
    while(op!=4);
}