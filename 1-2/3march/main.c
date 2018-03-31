#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1],b[1],i,c[i];
    printf("enter elements in first array\n");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements in second array\n");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=5;i++)
    {
        c[i]=a[i]+b[i];
        scanf("%d",c[i]);
    }
    return 0;
}
