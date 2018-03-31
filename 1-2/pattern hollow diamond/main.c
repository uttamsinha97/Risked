#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=4,m,i,t,y,p=0,u;
for(i=0;i<5;i++)
{
    for(k=5;k>0+i;k--)
     printf("*");
    for(m=0;m<2*i;m++)
    printf(" ");
    for(k=5-i;k>0;k--)
        printf("*");
        printf("\n");
}
for(t=5;t>0;t--)
{
 for(y=5;y>=5-p;y--)
        printf("*");
 for(u=2*t;u>2;u--)
 printf(" ");
 for(y=0;y<=0+p;y++)
    printf("*");
 printf("\n");
 p++;
 }
    return 0;
}
