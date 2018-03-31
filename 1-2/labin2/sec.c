#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c;
    int arr[25][25];
    printf("enter the size of matrix\n");
    printf("enter the same number of rows and column otherwise the process will terminate\n");
    printf("enter the number of rows\n");
    scanf("%i",&r);
    printf("enter the number of column\n");
    scanf("%i",&c);
    if(r==c)
    {
         for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==j)
                arr[i][j]=0;
            if(i>j)
                arr[i][j]=1;
            if(i<j)
            arr[i][j]=-1;
        }
    }
    printf("yer matrix\n\n");
        for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
    }
    else
        printf("process terminated\n\n");
        return 0;
}
