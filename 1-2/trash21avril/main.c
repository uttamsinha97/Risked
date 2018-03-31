#include <stdio.h>
#include <stdlib.h>

 typedef struct
 {
     char acname[10];
     char acnationality[10];
     int matches,wickets,overs,runs;

 }bowler;

int main()
{
    int i;
    bowler bowlers[5];
    printf("engter details\n");
    for(i=0;i<2;i++)
    {
        printf("enter name\n");
        scanf("%s",&bowlers[i].acname);
        printf("enter nationality\n");
        scanf("%s",&bowlers[i].acnationality);
        printf("enter matches played\n");
        scanf("%d",&bowlers[i].matches);
    }
        for(i=0;i<2;i++)
    {

        printf("%s",&bowlers[i].acname);

        printf("%s",&bowlers[i].acnationality);

        printf("%d",&bowlers[i].matches);
    }

}
