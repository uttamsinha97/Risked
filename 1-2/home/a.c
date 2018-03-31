#include <stdio.h>
#include <stdlib.h>
//program to print multipilcation table

int main()
{
    int n,i;
    printf("enter the number to get its multiplication table\n\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("  %d  *  %d  = %d \n\n",n,i,n*i);
    return 0;
}
