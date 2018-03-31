#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,d;
    for(i=1;i<=25;i++)
    {
        d=malloc(100);
        printf("%d\n",d);
    }
    return 0;
}
