#include<stdio.h>
#include<stdlib.h>
struct Day{
    char *dayName;
    int date;
    char *activity;
};
void create(struct Day *day){
    day->dayName = (char*)malloc(sizeof(char)*20);
    day->activity=(char*)malloc(sizeof (char)*100);
    printf("Enter the day name: ");
    scanf("%s",day->dayName);
    printf("Enter The Date: ");
    scanf("%d",&day->date);
    printf("Enter the activity: ");
    scanf("%s",day->activity);   
}
void read(struct Day *calender, int size){
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter details for Day %d\n",i+1);
        create(&calender[i]);
    }
}
void display(struct Day *calender,int size)
{
   int i;
   printf("\n Week Activity Details:\n");
   for(i=0;i<size;i++){
    printf("Day %d:\n",i+1);
    printf("Day Name:%s\n",calender[i].dayName);
    printf("Date: %d\n",calender[i].date);
    printf("Activity:%s\n",calender[i].activity);
    printf("\n");
   } 
};

int main(){
    int size;
    printf("Enter the number of days in the week: ");
    scanf("%d",&size);
    struct Day *calender=(struct Day*)malloc(sizeof(struct Day)*size);
    if (calender==NULL){
        printf("Memory Allocation failed. Exiting Program.\n");
        return  1;
    }
    read (calender,size);
    display(calender,size);
    return 0;
}
