#include <stdio.h>
#include<string.h>

int main() {
    int m,n;
   char STR[]="AABCABCAABAB";
   char PAT[]="AABA";
   char REP[]="TATA";
   m=strlen(STR);
   n=strlen(PAT);
   int i,j;
   for(i=0;i<m-n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(STR[i+j]!=PAT[j])
            break;
       
       }
       if(j==n){
            printf("Pattern found at %d \n",i+1);
            for(j=0;j<n;j++){
                STR[i+j]=REP[j];
            }
            printf("Replaced String is %s",STR);
       }
   }
   
   
    return 0;
}
