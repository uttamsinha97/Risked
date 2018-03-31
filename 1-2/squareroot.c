#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,disc,r1,r2,real,imag;
    int x;
    printf("Enter the co-eff of x^2,x and constant:\n");
    printf("x^2=");
    scanf("%f",&a);
    printf("\nx=");
    scanf("%f",&b);
    printf("\nconstant=");
    scanf("%f",&c);
    if(a==0)
    {
        printf("not quad eqn\n");
        exit(0);
    }
    disc=(b*b-4*a*c);
    x=(disc==0?1:(disc>0?2:3));
    switch(x)
    {
        case 1: r2=r1=-b/(2*a);
                 printf("\nThe roots of the quad eqn are:%g,%g\n",r1,r2);
                 break;

        case 2: r1=((-b+sqrt(disc))/(2*a));
                 r2=((-b-sqrt(disc))/(2*a));
                 printf("\nThe roots of the quad eqn are:%g,%g\n",r1,r2);
                 break;

        case 3: real=-b/(2*a);
                 imag=sqrt(-disc)/(2*a);
                 printf("\nThe roots of the quad eqn are: %g+I*%g  and  %g-I*%g\n",real,imag,real,imag);
                 break;
    }
}


