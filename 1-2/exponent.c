#include<stdio.h>
int power(int n,int x);
int main()
{
    int base,exp,res;
    printf("enter the base and exp.");
    scanf("%d%d",&base,&exp);
    res=power(base,exp);
    printf("%d raise to the power %d=%d",base,exp,res);
    return 0;
}
int power(int n,int x)
{
    if(n==1||x==0)
    return 1;
    else if(x==1)
    return n;
    else return(n*power(n,x-1));
}
