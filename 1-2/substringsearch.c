#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char actext[100],acpattern[10];
    int icount;
    char *pos=NULL,*start=NULL;
    printf("\nEnter the text\n");
    gets(actext);
    printf("\nEnter the substring to search for\n");
    gets(acpattern);
    start=actext;
    while((pos=strstr(start,acpattern)))
    {
        icount++;
        printf("\nSubstring found at position%ld\n",pos-actext+1);
        start=pos+1;
    }
    printf("\nNo. of occurences is%d\n",icount);
    return 0;
}
