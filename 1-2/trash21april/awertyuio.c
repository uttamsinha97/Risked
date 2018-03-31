#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char actext[50];
    char acpattern[50];
    int icount;
    char *pos=NULL;
    char *start=NULL;
    printf("enter a line of text\n\n");
    gets(actext);
    printf("enter the string to search\n\n");
    gets(acpattern);
    start=actext;
    while(pos=strstr(start,acpattern))
    {
        icount++;
        printf("%d  \n",pos-actext+1);
        start=pos+1;

    }
    printf("no of occurences %d\n\n",icount);
    return 0;

}
