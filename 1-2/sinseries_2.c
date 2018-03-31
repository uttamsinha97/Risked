#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    float ar,ad,fterm,fnum,fden,fval;
    int inum,i;
    printf("Enter the angle in degrees\n");
    scanf("%f",&ad);
    printf("Enter the no. of terms: \n");
    scanf("%d",&inum);
    printf("Angle=%g degrees\n",ad);
    printf("No of terms=%d \n",inum);
    ar=(ad*pi)/180;
    printf("Angle=%g radians\n",ar);
    fnum=ar;
    fden=1.0;
    fval=0.0;
    fterm=fnum/fden;
    i=1;
    while(i<=inum)
    {

        fval=fval+fterm;
        printf("%lf\n",fval);
        fnum=-fnum*ar*ar;
        fden=fden*(2*i)*(2*i+1);
        fterm=fnum/fden;
        i++;
    }
    printf("Calculated value is sin(%g)=%g\n",ad,fval);
    printf("Built in func value sin(%g)=%g\n",ad,sin(ar));
}
