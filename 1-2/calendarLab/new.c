#include <stdio.h>
#include <stdlib.h>

int printMonth(int sday, int nday);
int main()
{
    int sday,nday;
    printf("enter the starting day \n");
    printf("0 being sunday 1 being monday ....6 being saturday\n");
    scanf("%d",&sday);
    printf("enter the no of days in the month \n");
    scanf("%d",&nday);
    printf("\n\n");
    if(sday<0 || sday>6 || nday<1 || nday>31)
    {

        printf("INVALID input\n");
        exit(0);
    }
printMonth(sday,nday);
return 0;
}
printMonth(int sday, int nday)
{

    int i,j;
    printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
    for(i=0;i<sday;i++)
    {
        printf("\t");
    }

    for(j=1;j<nday;j++)
    {
        printf("%3d\t",j);
        if(((j+sday)%7)==0)
            printf("\n");
    }
    printf("\n \n");
    return 0;
}


