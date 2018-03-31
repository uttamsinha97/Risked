#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum;
    int *pn1;
    int *pn2;
    printf("enter two nos\n");
    scanf("%d%d",&a,&b);
    pn1=&a;
    pn2=&b;
    sum=*pn1+*pn2;
    printf("sum is:%d",sum);
    return 0;
}
