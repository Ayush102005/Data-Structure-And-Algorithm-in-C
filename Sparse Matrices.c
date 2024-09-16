#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,arr[10][10],count=0,row,col;
    printf("Enter Row's & Col's ");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>=row*col/2)
    printf("This is a sparse matrix");
    else
    printf("This is not a Sparse matrix");
}