#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sday,nday,i,j;
    printf("enter the sday of month\n\n");
    scanf("%i",&sday);
    printf("enter the total number of days in month\n\n");
    scanf("%d",&nday);
    if(sday<0 || sday>6 || nday<1 || nday>30)
    {
        printf("invalid input\n\n");
        exit(0);
    }
    printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
    for(i=0;i<sday;i++)
    {
        printf("\t");
    }
    for(j=1;j<=nday;j++)
    {
        printf("%d\t",j);
        if((j+sday)%7==0)
        printf("\n");
    }
    printf("\n\n");
}
