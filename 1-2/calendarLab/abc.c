#include <stdio.h>
#include <stdlib.h>
int printMonth(int sday, int nday);

int main()
{
    int sday,nday;
    printf("\n enter the starting day\n");
    scanf("%d",sday);
    printf("\n enter the no of days in the month\n");
    scanf("%d",nday);
    if(sday<0 || sday>6 || nday<1 || nday>31)
        printf("\n INVALID input \n");
    exit(0);
    printMonth(sday,nday);
}
printMonth(int sday, int nday)
{
    int i,j;
    for(i=1;i<sday;i++)
    {
        printf("\t");
    }

    for(j<1;j<=nday;j++)
    {
        printf("%d\t",j);
        if((j+sday)%7==0)
            printf("\n");
    }
    printf("\n\n");
    return 0;
}
