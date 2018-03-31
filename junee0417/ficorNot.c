#include<stdio.h>
int fib(int );
int main()
{
    int n,z,i;
    printf("enter the number to check for fic\n\n");
    scanf("%d",&n);
    int c=0;
    for(i=0;i<=20;i++)
    {
        z=fib(i);
        if(z == n)
        {
            printf("fibonacci number\n\n");
            c=1;
        }
    }
    if(c == 0)
        printf("not a fibonacci number\n\n");
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
        return n;

    else
        return (fib(n-1)+fib(n-2));
}
