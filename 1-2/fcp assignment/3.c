#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf("\n");
        }
        for(k=1;k<(2*i)-1;k++)
        {
            printf(" ");
        }
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
