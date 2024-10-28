#include <stdio.h>

void insertion(int arr[], int size, int index, int element, int capacity)
{
    if (size < 0 || size >= capacity)
    {
        printf("INVALID INDEX");
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    
}
void delete(int arr[], int size, int index)
{
    if(index<0 || index>=size){
        printf("Invalid Index");
    }
    for (int i = index; i<=size - 1; i++)
    {
        arr[i] = arr[i + 1];

    }
}
void display(int arr[], int n)
{
    for (int i = 0; i <n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int c;
    int capacity;
    printf("Enter The Capacity Of Array\n");
    scanf("%d",&capacity);
    int arr[capacity];
    printf("ENTER NO. OF ELEMENTS IN THE ARRAY:\n");
    int size; scanf("%d", &size);
    printf("ENTER ARRAY ELEMENTS:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    do{
    printf("\n1.Inserting an element at the given valid position \n 2.Deleting the element at a given valid position \n 3. Display of array elements \n 4. Exit:\n");
    printf("ENTER CHOICE:\n");
     scanf("%d", &c);
    int element, index, capacity;
    switch (c)
    {
    case 1:

        printf("ENTER INDEX\n");
        scanf("%d", &index);
        printf("ENTER ELEMENT\n ");
        scanf("%d", &element);
        insertion(arr, size, index, element, capacity);
        size++;
        display(arr, size);
        break;
    case 2:
        printf("ENTER INDEX\n");
         scanf("%d", &index);
        delete (arr, size, index);
        size--;
        display(arr, size);
        break;
    case 3:
        display(arr, size);
        break;
    case 4:
        printf("EXIT \n");
    default:
        printf("INVALID CHOICE");
    }
    }
    while(c!=4);
}