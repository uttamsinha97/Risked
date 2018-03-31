#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[1000],sexy[1000];
    printf("enter a string \n");
    gets(source);
    gets(sexy);
    if (strcmp(source,sexy)==0)
        printf("equal string\n");
    else
        printf("unequal\n");
    return 0;
}
