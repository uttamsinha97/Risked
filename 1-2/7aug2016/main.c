#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,r,c,w;
    int arr[25][25][25];
    printf("enter the number of rows\n\n");
    scanf("%d",&r);
        printf("enter the number of columns\n\n");
    scanf("%d",&c);
        printf("enter the width\n\n");
    scanf("%d",&w);
    printf("start entering numbers\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            for(k=1;k<=w;k++)
                scanf("%i",&arr[i][j][w]);
        }
    }
    printf("the numbers are in #3 D array\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            for(k=1;k<=w;k++)
            {
                 printf("%i",arr[i][j][w]);
                 printf("\n");
            }
            printf("\n");
            }
    }
    return 0;
}
