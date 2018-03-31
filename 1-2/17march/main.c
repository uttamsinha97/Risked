#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,c,r;
    int arr[25][25];
    printf("kindly enter the values of rows and column same for the matrix\n");
    printf("enter the rows in matrix\n");
    scanf("%d",&r);
    printf("enter the columns in matrix\n");
    scanf("%d",&c);
    if(r==c)
    {
         {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)

                if(i==j)
                arr[i][j]=0;

        }

    }
    for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                printf("%d  ",arr[i][j]);
            }
            printf("\n");
        }

    }

    else
        exit(0);
}
