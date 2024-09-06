#include<string.h>
int main() 
{
    char temp[20];
    char Ashwin[20]="AshwinKumar";
    int n;
    n=strlen(Ashwin);
    for(int i=0;i<=n/2;i++)
    {
        temp[i]=Ashwin[i];
        Ashwin[i]=Ashwin[n-1-i];
        Ashwin[n-1-i]=temp[i];
    }
    printf("%s",Ashwin);
    return 0;

}