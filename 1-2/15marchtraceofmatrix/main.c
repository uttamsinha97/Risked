#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c,sum=0;
    int arr[25][25];
    printf("hello\neneter the no of rows and column in matrix\n");
    scanf("%d%d",&r,&c);
    printf("start entering eleemnts in matrix\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("yer array is\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n\n");
    }
    if(r==c)
    {
        printf("matrix entered is a a square matrix\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==j)
                sum=sum+arr[i][j];
        }


    }
    printf("trace of matrix %d\n\n",sum);
    }
    else
        printf("not a square matrix\ntrace cannot be calculated\n\n");

}
