#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,x,sin;
    printf("enter the number whose SINE is to be computed \n \n");
    scanf("%f",&a);
    x=a*3.14/180.0;
    sin=(x)-(x*x*x)/(1*2*3)+(x*x*x*x*x)/(1*2*3*4*5)-(x*x*x*x*x*x*x)/(1*2*3*4*5*6*7);
    printf("sine value of number %f is %f \n \n ",a,sin);
    printf("\n terminated \n");
    return 69;
}
