#include <stdio.h>
#include <stdlib.h>
int power(int,int);
int main()
{
    int pow,base,result;
    printf("enter the power\n\n");
    scanf("%d",&pow);
    printf("enter the base of the number\n\n");
    scanf("%d",&base);
    result=power(base,pow);
    printf("result of the expression is %d \n\n",result);
    return 0;
}
int power(int base,int exp)
{
    if(base==1 ||exp==0)
        return 1;
    else if(exp==1)
        return base;
    else
        return (base*power(base,exp-1));
}
