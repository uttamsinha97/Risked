#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("enter the starting day\n\n0 being sunday 1 being monday.......6 being saturday\n\n");
    scanf("%d",&sday);
    printf("enter the number of days in the month\n\n");
    scanf("%d",&nday);
    if(sday<0 || sday>6 || nday<1 || nday>30)
    {
        printf("invalid input\n\n");
        exit(0);
    }
    printf()
    for(i=0;i<sday;i++)
    {
        printf("\t");
    }

}
