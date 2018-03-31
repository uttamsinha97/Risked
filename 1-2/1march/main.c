#include <stdio.h>
#include <stdlib.h>
int fact(int r);

int main()
{
    int n,r,ncr;
    printf("enter value of n and r\n");
    scanf("%d%d",&n,&r);
    if (n<r)
    {
        printf("nCr does not exist\n");
        exit(0);
    }
    else
    {
        ncr=fact(n)/(fact(n-r)*fact(r));
        printf("nCr value is %d\n",ncr);
    }
}
int fact(int r)
{
    int n;
    int f;
    if(n==0)
        return 1;
    else
    {
        f=n*fact(n-1);
        return f;

    }
}
