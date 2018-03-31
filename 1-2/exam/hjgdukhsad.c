#include<stdio.h>
#include<stdlib.h>
int fib(int );
int main()
{
    int i,num,term;
    printf("enter the number of terms till fibonacci number\n\n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        term=fib(i);
        printf("%d   ",term);
    }
}
int fib(int n)
{
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
