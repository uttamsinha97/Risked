#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,c,n,temp,i,r;
    printf("enter the no of rows\n");
    scanf("%d",&n);
    temp=n;
    for(row=1;row<=r;row++)
    {
        for(c=1;c<=temp;c++)
            printf(" ");
        temp--;
        for(c=i;c<=2*row-1;c++)
            printf(" * ");
        printf("\n");
    }


    return 0;
}
