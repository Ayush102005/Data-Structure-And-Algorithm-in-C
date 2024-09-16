#include <stdio.h>
#include <string.h>

int main()
{
    int m, n;
    char new[]="XXYZ";
    char str[] ="AABCABCAABAB";
    char pattern[]="AABA";
    m = strlen(str);
    n = strlen(pattern);
    int i, j;
    for (i = 0; i <m-n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (str[i + j] != pattern[j])
                break;
        }

        if (j == n)
        {
            printf("Pattern found at %d\n", i + 1);
            for(j=0;j<n;j++)
            {
                str[i+j]=new[j];
            }
            printf("REPLACED STRING: %s",str);
        }
    
    }
    return 0;
}