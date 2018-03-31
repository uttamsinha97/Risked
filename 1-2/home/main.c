#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,div;
    float *p1,*p2;
    printf("enter the first number\n\n");
    scanf("%f",&a);
    printf("enter the second number\n\n");
    scanf("%f",&b);
    p1=&a;
    p2=&b;
    div=*p1/(*p2);
    printf("division of numbers is %f\n\n",div);
    return 0;
}
