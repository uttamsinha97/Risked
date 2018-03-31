#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[1000],destination[1000];
    printf("enter a string \n");
    gets(source);
    strcpy(destination,source);
    printf("%s %s",source,destination);
    return 0;
}
