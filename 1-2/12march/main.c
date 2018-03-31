#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c;
    int arr[25][25];
    printf("enter the number of rows\n");
    scanf("%d",&r);
    printf("enter the number of columns\n");
    scanf("%d",&c);
    printf("start entering numbers in the array\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("the numbers in yer array are\n");
    for(i=1;i<=r;i++)

    {
        for(j=1;j<=c;j++)
        {
            printf("%d",arr[i][j]);
        }
         printf("\n");
    }


}
