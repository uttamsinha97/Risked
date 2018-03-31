#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,r,c;
    int arr[25][25];
    int arrt[25][25];
    printf("enter the no of rows\n");
    scanf("%d",&r);
    printf("enter the no of coulumn\n");
    scanf("%d",&c);
    printf("start enteringf numbers in the two d matrix\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("yer array is\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            arrt[j][i]=arr[i][j];
        }
    }
    printf("the transpose the entered array\n\n");
        for(i=1;i<=c;i++)
    {
        for(j=1;j<=r;j++)
            printf("%d ",arrt[i][j]);
        printf("\n");
    }



}
