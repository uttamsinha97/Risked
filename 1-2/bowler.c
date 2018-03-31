#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char acname[30];
    char acnationality[30];
    int imatches,iwickets,iovers,iruns;
}bowler;
int main()
{
    bowler bowlers[5];
    int i,iposeconomy=0,iposstrrate=0;
    float feconomy[5],fstrrate[5],fbesteconomy,fbeststrrate;
    printf("\nEnter details\n");
    for(i=0;i<2;i++)
    {
        printf("name: ");
        scanf("%s",bowlers[i].acname);
        printf("nationality :  ");
        scanf("%s",bowlers[i].acnationality);
        printf("matches played: ");
        scanf("%d",&bowlers[i].imatches);
        printf("wickets taken: ");
        scanf("%d",&bowlers[i].iwickets);
        printf("overs bowled: ");
        scanf("%d",&bowlers[i].iovers);
        printf("runs conceded :");
        scanf("%d",&bowlers[i].iruns);
        printf("\n");

    }
    fbesteconomy=feconomy[0]=(float)bowlers[0].iruns/bowlers[0].iovers;
    fbeststrrate=fstrrate[0]=(float)bowlers[0].iovers/bowlers[0].iwickets;
    printf("\n\nname\t\tnation\t\tmatches   wickets   overs   runs   economy   sr\n");

    for(i=0;i<2;i++)
    {
        feconomy[i]=(float)bowlers[i].iruns/bowlers[i].iovers;
        fstrrate[i]=(float)bowlers[i].iovers/bowlers[i].iwickets;
        printf("%-16s",bowlers[i].acname);
        printf("%-10s\t",bowlers[i].acnationality);
        printf("%-10d",bowlers[i].imatches);
        printf("%-10d",bowlers[i].iwickets);
        printf("%-8d",bowlers[i].iovers);
        printf("%-7d",bowlers[i].iruns);
        printf("%-10f",feconomy[i]);
        printf("%-6f",fstrrate[i]);
        printf("\n");

        if(fbesteconomy>feconomy[i])
        iposeconomy=i;
        if(fbeststrrate>fstrrate[i])
        iposstrrate=i;
    }
    printf("\nThe bowler with best economy is :%s\n",bowlers[iposeconomy].acname);
    printf("\nThe bowler with best strike rate is :%s\n",bowlers[iposstrrate].acname);
    return 0;
}
