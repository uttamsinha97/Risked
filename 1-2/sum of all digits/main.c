#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,t,c=0;
    printf("enter any integer number\n");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        a=t%10;
        c=c+a;
        t=t/10;
    }
    printf("sum of digits of %d is %d",n,a);
    return 0;
}
