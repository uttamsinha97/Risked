#include<stdio.h>
#include<stdlib.h>
long int fact(int n);
int main()
{
    int n,r;
    long int ncr;
    printf("enter the values of n and r:\n");
    scanf("%d%d",&n,&r);
    if(n<r)
    {
        printf("nCr does not exist\n");
        exit(0);
    }
    else{
        ncr=fact(n)/(fact(n-r)*fact(r));
        printf("%dC%d = %ld",n,r,ncr);
    }}
    long int fact(int n)
    {long int f;
        if(n==0)
    return(1);
    else{
    f=n*fact(n-1);
    return f;}
}

