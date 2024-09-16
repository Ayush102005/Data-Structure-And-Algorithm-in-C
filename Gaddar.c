#include <stdio.h>
#include<string.h>

int main() {
    int m,n;
   char string[]="AABCABCAABAB";
   char pattern[]="AABA";
   
   m=strlen(string);
   n=strlen(pattern);
   int i,j;
   for(i=0;i<m-n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(string[i+j]!=pattern[j])
            break;
       
       }
       if(j==n)
   printf("Pattern found at %d",i+1);
   }
   
   
    return 0;
}
