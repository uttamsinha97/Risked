#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fs;
    fs=fopen("File.txt","w");
    if(fs==NULL)
    {
        printf("error\a\n");
        exit(101);
    }
    fprintf(fs,"TQSLERTPSADX");
    fclose(fs);
    printf("content written to file\n\n");
    return 0;
}
