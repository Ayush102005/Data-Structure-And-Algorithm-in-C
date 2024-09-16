#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char string[]="AABCABCAABAB";
    char pattern[]="AABA";
    int m=strlen(string);
    int n=strlen(pattern);
    for(i=0;i<m-n;i++){
        for(j=0;j<n;j++){
            if (string[i+j]!=pattern[j]){
                break;
            }
        }
        if(j==n){
            printf("Pattern is found at %d",i+1);
        }
    }
}