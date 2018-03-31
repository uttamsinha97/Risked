#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int *p;
    int *q;
    int *r;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    p=&a;
    q=&b;
    r=&c;
    printf("yer numbers are %d %d %d \n\n",a,b,c);
    printf("address of numbers are %p %p %p \n \n ",p,q,r);
    printf("sum of the numbers are %d\n\n", *p + *q + *r);
    return 0;
}
