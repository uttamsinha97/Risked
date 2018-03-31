#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fntrap(int h1,int h2,int base);
int main()
{
    int i;
    float lh,rh,dx,l,m,n,o,darea,totalarea=0.0;
    printf("enter the left hand and right hand limit\n\n");
    scanf("%f%f",&lh,&rh);
    printf("enter the increment \n\n");
    scanf("%f",&dx);
    for(i=lh;i<=rh;i=i+dx)
    {
        l=i;
        m=i+dx;
        n=log(l);
        o=log(m);
        darea=fntrap(n,o,dx);
    }
    totalarea=totalarea+darea;
    printf("total area %f\n\n",totalarea);
    return 0;
}
int fntrap(int h1,int h2,int base)
{
    return((h1+h2)*base/2.0);
}
