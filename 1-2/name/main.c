#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char name[4][20];
    printf("enter the name\n");
    for(i=1;i<=3;i++)
    {
        scanf("%s",name[i]);
    }
    for(i=1;i<=3;i++)
    {
           printf("\n\n%s\n",name[i]);
    }

}
