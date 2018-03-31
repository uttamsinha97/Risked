#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[1],b[1],c[1],i;
    printf("start entering numbers into array\n you need to enter ten numbers\n make sure you enter only integer value\n\n");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements in second array\n");6
        for(i=1;i<=10;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("your array");
    for(i=1;i<=10;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d  ",c[i]);
    }

}
