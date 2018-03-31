#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sday,nday,i,j;
    printf("Enter the starting day\n");
    printf("0 being sunday and 6 being saturday : ");
    scanf("%d",&sday);
    printf("Enter the no. of days day: ");
    scanf("%d",&nday);
    if(sday<0||sday>6||nday<1||nday>31)
    {
        printf("invalid input\n");
        exit(0);
    }
    printf("\nSun\tMon\tTue\tWed\tThrs\tFri\tSat\n");
    for(i=0;i<sday;i++)
    {
        printf(" \t");
    }
    for(j=1;j<=nday;j++)
    {
        printf("%d\t",j);
        if(((j+sday)%7)==0)
        printf("\n");

    }
    printf("\n\n");
}
