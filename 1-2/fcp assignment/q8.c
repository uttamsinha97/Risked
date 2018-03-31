#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,hcf,lcm,i;
    printf("enter the first number\n");
    scanf("%d",&m);
    printf("enter the second numner\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        {
            hcf=i;
        }
    }
    lcm=(m*n)/hcf;
    printf("\n\lcm of %d and %d is %d ",m,n,lcm);
    return 0;
}
