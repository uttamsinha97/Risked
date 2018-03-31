#include<stdio.h>
int fib(int );
int main()
{
    int n,z,i;
    printf("enter the range for fibonacci series\n\n");
    scanf("%d",&n);
    z=fib(n);
    printf("%d   ",z);
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
        return n;

    else
        return (fib(n-1)+fib(n-2));
}
