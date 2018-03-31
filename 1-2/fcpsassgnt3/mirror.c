#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,i,j,k;
    printf("enter the number \n");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
             printf(" ");
        }
        for(k=r;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
