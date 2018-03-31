#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r1,c1,r2,c2;
    int arro[10][10];;
    int arrt[10][10];
    printf("enter the sizes of the matrix\n");
    printf("enter the number of rows in matrix one\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the rows and column in matrix second\n");
    scanf("%d%d",&r2,&c2);
    printf("start enetreinf elements in matrix one\n");
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
            scanf("%d",&arro[i][j]);
    }
       printf("start entering  elements in matrix second\n");
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
            scanf("%d",&arrt[i][j]);
    }
    printf("elements of matrix one");
       printf("elemnts of  matrix one\n");
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("%d",arro[i][j]);
        }
        printf("\n");

    }
        printf("elemnts of  matrix two\n");
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
            printf("%d",arrt[i][j]);
        }
        printf("\n");

    }
}
