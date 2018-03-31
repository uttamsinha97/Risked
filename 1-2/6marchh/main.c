#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int a[0];
    printf("enter size\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("yer array\n");
    for(i=1;i<=n;i++)
        printf("%d  ",a[i]);
    return 0;

}
