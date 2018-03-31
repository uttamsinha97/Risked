#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("file.txt","w");
    printf("\nenter the data to be strored in the file\n");
    while((ch=getchar())!=EOF)
        putc(ch,fp);
    fclose(fp);
    return 0;
}
