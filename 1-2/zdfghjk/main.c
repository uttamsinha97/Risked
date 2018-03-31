#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("bowler.c","r");
    if(fp==NULL)
    {
        puts("cannot open file\n");
        exit(0);
    }
}
