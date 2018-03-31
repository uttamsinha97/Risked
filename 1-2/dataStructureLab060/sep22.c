#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fs1;
    char text[100];
    fs1=fopen("uttam.txt","w");
    if(fs1==NULL)
    {
        printf("file error\a\n");
        exit(101);
    }
    else
    fprintf(fs1,"hello world. hello");
    fclose(fs1);
    printf("content written to file\n\nyou may check the content of file at its location\n\n");
    return 0;
}
