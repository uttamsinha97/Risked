#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sday,nday,i,j;
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
    for(i=1;i<sday;i++)
        printf("\t");
    for()
}
