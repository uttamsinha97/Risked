#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20][20];
    int arr1[20][20];
    int n,i,j;
    printf("enter the size of the array\n\n");
    scanf("%d",&n);
    printf("enter the array elements of the array \n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    printf("array elements \n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        printf("%4d",arr[i][j]);
        }
        printf("\n");
    }


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            arr1[j][i]=arr[i][j];
        }
    }

        printf("array elements \n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        printf("%4d",arr1[i][j]);
        }
         printf("\n");
    }

}
