#include <stdio.h>

void tower(int n, char s, char a, char d)
{
    if (n == 1)
    {
        printf("\nMOVING %c TO %c", s, d);
    }
    else
    {
        tower(n - 1, s, d, a);
        tower(1, s, a, d);
        tower(n - 1, a, s, d);
    }
}

int main()
{
    int n;
    char a, s, d;

    printf("ENTER N: \n");
    scanf("%d", &n);
    getchar();
    printf("S? A? D?\n");
    scanf(" %c %c %c", &s, &a, &d);

    tower(n, s, a, d);

    return 0;
}