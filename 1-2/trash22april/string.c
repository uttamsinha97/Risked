#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char actext[100];
    char acpattern[100];
    char *pos=NULL,*start=NULL;
    printf("enter the plain text\n");
    gets(actext);
    printf("enter the pattern\n make sure cases are same\n");
    gets(acpattern);
    start=actext;
    while(pos=strstr(start,acpattern))
    {
        int countt++;
        printf("substring found at position %ld \n",pos-actext+1);
        start=pos+1;
    }
    printf("total number of occrences *d")
}
