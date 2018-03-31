#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[]={2.8,3.4,4,6.7};
    int i,*p=a,*q=a;
    for(i=0;i<4;i++)
    {
        printf("%d",*a);
        ++q;
    }
    for(i=0;i<4;i++)
    {
        printf("%i",*p);
        ++p;
    }
}
