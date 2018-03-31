#include <stdio.h>
#include <stdlib.h>
int last(int a);
int slast(int b);
int sum(int a,int b);

int main()
{
    int num,l,m,n;
    printf("enter the integer number\n\n");
    scanf("%d",&num);
    l=last(num);
    m=slast(num);
    n=sum(l,m);
    printf("\n\n%d\n\n",n);
    return 0;

}
int last(int a)
{
    return (a%10);
}
int slast(int b)
{
    return ((b/10)%10);
}
int sum(int a,int b)
{
    return (a+b);
}
