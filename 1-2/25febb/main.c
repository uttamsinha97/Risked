#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter the number to get power\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        n=n*i;
    printf("%d",n);
    return 0;
}
