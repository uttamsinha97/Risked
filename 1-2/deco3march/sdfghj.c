#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,r,temp;
    printf("enter the no of rows you want to seee in pyramid\n");
    scanf("%d",&r);
    temp=r;
    for(i=1;i<r;i++)
    {
        for(j=1;j<=temp;j++)
            printf(" ");
        temp--;
        for(k=1;k<(2*r-1);k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
