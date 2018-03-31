#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c;
    int arr[25][25];
    printf("enter number of rows\n");
    scanf("%d",&r);
    printf("enter the number of columns\n");
    scanf("%d",&c);
    printf("start entering numbers in the two D array\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("yer array is\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d   ",arr[i][j]);
        }
        printf("\n\n");
    }
    if(r==c)
        {
            printf("diagonal elements are\n");
            for(i=1;i<=r;i++)
                {
                    for(j=1;j<=c;j++)
                        {
                            if(i==j)

                            printf("%d ",arr[i][j]);
                        }
                }
        }
    else
        printf("not a SQAURE MATRIX\ndiagonal elements cannot be computed\n\n");
}
