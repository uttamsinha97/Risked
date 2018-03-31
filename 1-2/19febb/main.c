#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,c,n,temp;
    printf("enter the number of rows \n");
    scanf("%d",&n);

    temp=n;
    for(row=1;row<=n;row++) //for rows
    {
        for(c=1;c<temp;c++) //for spaces
            printf(" ");
        temp--;
        for(c=1;c<=2*row-1;c++)
            printf("*");
        printf("\n");
    }
    return 5;
}
