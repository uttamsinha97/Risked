#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double fnTrapArea(double h1,double h2,double base);
int main()
{
    double i,dx1,dx2,dy1,dy2,dx;
    double dleft,dright,darea,totalarea=0.0;
    printf("enter the left and right limits:\n");
    scanf("%lf%lf",&dleft,&dright);
    printf("enter the increment:\n");
    scanf("%lf",&dx);
    for(i=dleft;i<dright;i=i+dx)
    {
        dx1=i;
        dx2=i+dx;
        dy1=log(dx1);
        dy2=log(dx2);
        darea=fnTrapArea(dy1,dy2,dx);
    }

        totalarea=totalarea+darea;
        printf("total area under curve=:%lf\n",totalarea);
        return 0;


}
 double fnTrapArea(double h1,double h2,double base)
    {
        return(base*((h1+h2)/2));
    }
