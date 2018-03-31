#include <stdio.h>
#include <stdlib.h>
int fib(int);

int main()
{
    int s,term,i,c=0;
    printf("enter the number to search in fibonnaci series\n\n");
    scanf("%d",&s);
    for(i=0;i<=20;i++)
    {
        term=fib(i);
        if(term==s)
            c=c+1;
        //printf("%10d",term);
    }
    if(c==1)
        printf("\n\nYES number is from fibonnaci series.\n\n\n");
    else
        printf("\n\nnumber is NOT in fibonnaci seies\n\n\n");
    return 0;
}
int fib(int n)
{
    if (n==0 || n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
