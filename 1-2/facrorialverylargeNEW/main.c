#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,r,c;
    printf("enter the no rows\n");
    scanf("%d",&r);
    printf("enter the no column\n");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(c=i;c>1;c++)
        {
            for(j=1;j<=c;j++)
                {
                    printf("%d ",i);
                }
        }

            printf("\n");
    }
       return 0;
}
