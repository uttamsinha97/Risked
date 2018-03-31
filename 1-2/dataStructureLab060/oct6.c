#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[25][25];int arrcon[25][25];
    int i,j,r,c,ct=0;
    int z,d=0;
    printf("enter the number of rows and coulumn in sparse matrix\n\n");
    scanf("%d%d",&r,&c);
    printf("start entering numbers in the matrix\n\n");
    printf("enter only zero 0 and ONE 1\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("the elements of the matrix are\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(arr[i][j]==0)
            ct=ct+1;
            else
            for(z=1;z<3;z++)
            {
                for(d=1;<10;d++)
                arrcon[z][d++]=i;
                arrcon[z][d]=j;
            }
        }
    }
    if(ct>(r*c)/2)
    printf("SPARSE MATRIX\n\n");
    else
    printf("not a sparse matrix\n\n");
            for(z=1;z<=2;c++)
            {
                for(d=1;<=10;d++)
                {
                    printf("%4d",arrcon[c][d]);
                }
            }
    return 0;
}
