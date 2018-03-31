#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a="and i am a fucker";
    FILE *fp;
    char ch;
    fp=fopen("uttam","a");
    fprintf(fp,"\t%s",a);
}
