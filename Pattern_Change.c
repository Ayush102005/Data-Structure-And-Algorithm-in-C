#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="AABCABCAABABC";
    char pattern[]="AABC";
    char replace[]="EFGH";
    int m=strlen(string);
    int n=strlen(pattern);
    int j=0,k=0;
    printf("Ayush Kumar Singh\nUSN-1AY23CS048\n");
    for(int i=0;i<m-n;i++)
    {
       for(j=0;j<n;j++)
       {
        if(string[i+j]!=pattern[j])
        {
            break;
        }
       }
       if(j==n)
       {
        printf("Pattern found at %d\n",i+1);
        for(int j=0;j<n;j++)
        {
            string[i+j]=replace[j];
        }
       }
    
    }
    printf("after replacing the new string is: %s ",string);
    return 0;
}