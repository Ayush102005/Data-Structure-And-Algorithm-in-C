#include<stdio.h>
#include<stdlib.h>
struct poly{
            int n;
            struct term *t;
};
struct term{
    int coeff;
    int exp;
};
int main(){
    int i;
    struct poly p;
    printf("Enter number of terms ");
    scanf("%d",&p.n);
    p.t=(struct term*)malloc(p.n*sizeof(struct term));
    printf("Enter ");
    for(i=0;i<p.n;i++){
       scanf("%d%d",&p.t[i].coeff,&p.t[i].exp);
    }
    for(i=0;i<p.n;i++){
       printf("%dx^%d",p.t[i].coeff,p.t[i].exp);
       if(i<p.n-1)
       printf("+");
    }
}
