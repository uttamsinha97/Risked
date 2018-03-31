#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,k=0;
    printf("enter number of rows\n");
    scanf("%d",&r);
    printf("enter number of column\n");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        {
            for(j=1;j<=c;j++)
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
     return 0;
}
