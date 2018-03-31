#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,hcf,i;
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
    printf("\n\nhcf of %d and %d is %d ",m,n,hcf);
    return 0;
}
