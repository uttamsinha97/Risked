#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y,t,hcf,lcm;
    printf("program to print HCF of two numbers\n input the number from the standard input\n \n");
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    x=a;
    y=b;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=b;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    printf("hcf of number is %d \n",hcf);
    printf("lcm of number is %d \n",lcm);
    return 0;
}
