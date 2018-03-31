#include <stdio.h>
#include <complex.h>
int main()

{   int a,b;
    float complex c;
    printf{"\n enter the real part of complex number \n"};
    scanf("%d",&a);
    printf{"\n enter the complex part of complex number \n"};
    scanf("%d",&b);
    c=a+I*b;
    printf{"\n the real part of complex number &d \n",real(c)};
    printf{"\n the complex part of complex number &d \n", imag(c)};
}
