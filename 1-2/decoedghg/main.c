#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z;
    char newsource[50],source[50],destination[50],destination2[50];
    printf("enter the first string\n");
    gets(source);
    printf("enter the second string\n");
    gets(newsource);
    strcpy(destination,source);
    strcpy(destination2,newsource);
    puts("new strings\n");
    puts(destination);
    puts(destination2);
    z=strcmp(source,newsource);
    if(z==0)
    {
        printf("same strings\n\n");
    }
    else
        printf("not same strings\n");
    return 0;
}
