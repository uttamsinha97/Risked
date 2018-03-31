#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    printf("enter the value of n\n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%lf  \n",(pow(10,i))/9);
    }
    return 0;
}
