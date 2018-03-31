#include <stdio.h>
int main()
{
    int arr[10][10][10];
    int m,n,o,i,j,k;
    printf("enter the size of array\n");
    scanf("%d%d%d",&m,&n,&o);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=o;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=o;k++)
            {
                printf("%4d",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;

}
