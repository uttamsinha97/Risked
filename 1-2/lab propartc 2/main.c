#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c;
    int a[25][25];
    printf("kindly enter same number of rows and column\n");
    printf("enter no of rows and column\n");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
         for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                if(i==j)
                    a[i][j]=0;
                if(i<j)
                    a[i][j]=-1;
                if(i>j)
                    a[i][j]=1;

            }

        }
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n\n");
        }

    }



    else
    {
        printf("matrix computation not possible\n\nTERMINATING\n");
        exit(0);
    }

}
