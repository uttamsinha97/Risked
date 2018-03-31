#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,s;
    printf("enter the number of rows \n");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    return s;

}
