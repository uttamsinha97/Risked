#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int *p;
    int n,i;
    printf("\n\nenter the size of array\n\n");
    scanf("%d",&n);
    printf(" enter elements in the array\r");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        printf("%d  ",a[i]);
    printf("\n\n");
    printf("%i   %p",&a[0],a);


    printf("\n\nTERMINATING\n\n!\n");
    return 0;
}
