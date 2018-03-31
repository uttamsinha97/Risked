#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z,a,m;
    printf("enter twos numbers \n");
    scanf("%d%d",&x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d\n%d ",x,y);
    printf("enter another 2 number\n");
    scanf("%d%d",&z,&m);
    z=z>>1;
    a=m<<1;
    printf("%d\n",z); //half
    printf("%d\n",a); // double
}
