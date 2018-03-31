#include <stdio.h>
#include <stdlib.h>
int main()
{
    //char str[100];
    char str;
    FILE *fp;
    int i,p;
    fp=fopen("File.txt","r");
    for(i=0,p=2;i<6;i++)
    {
        fseek(fp,-p,2);
        printf("%c",getc(fp));
        printf("%s\n",str);
        p=p+2;
    }
        fclose(fp);
}
