#include<stdio.h>
#include<stdlib.h>
int power(int,int);
int main()
{
    int x,n,l;
    printf("enter the value of x\n\n");
    scanf("%d",&x);
    printf("enter the value of n\n\n");
    scanf("%d",&n);
    l=power(x,n);
    printf("%d   ",l);
    return 0;

}
int power(int x,int n)
{
    if (n==1 ||x==0 )
        return 1;
        else if(x==1)
            return n;
    else
    return n*power(n,x-1);
}
