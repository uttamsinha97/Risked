#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int term,i;
    float rad,num,den,val,deg;
    printf("enter the value of angle in degrees\n\n");
    scanf("%f",&deg);
    printf("enter the number of terms\n\n");
    scanf("%d",&term);
    printf("the value entered by you in degrees is %f\n\n",deg);
    printf("the number of terms are %d\n\n",term);
    rad=deg*3.14/180;
    printf("the value of angle in radians is %f \n\n",rad);
    num=rad;
    den=1.0;
    val=0.0;
    term=num/den;
    for(i=1;i<=term;i++)
    {
        val=val+term;
        num=-num*rad*rad;
        den=den*(2*i)*(2*i+1);
        term=num/den;
    }
    printf("value using for loop %f\n\n",val);
    printf("value using built in function %f\n\n",sin(rad));
}
