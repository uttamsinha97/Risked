#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k=1,r;
    printf("enter the no of rows\n");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {   printf("%4d",k);
            k++;
        }
    printf("\n");
    }
    return 0;
}
//code construct to print floyd triangle
