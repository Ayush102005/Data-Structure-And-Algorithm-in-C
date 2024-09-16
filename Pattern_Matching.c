#include<stdio.h>
#include<string.h>
int main()
{
    char *Str={"AABCABCAABAB"};
    char *patt="AABA";
    int m=strlen(Str);
    int n=strlen(patt);
    int j;
    for(int i=0;i<m-n;i++){
        for(j=0;j<n;j++){
            if(Str[i+j]!=patt[j])
                break;
            
        }
        if(j==n)
        {
            printf("Pattern Found at %d",i+1);
        }
    }

}