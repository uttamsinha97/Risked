#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main()
{
    char *str = "my name is khan";
    char *sub = "is";
    char * s;
    printf("first string is\n %s\n\n",str);
    printf("second string is\n %s\n\n",sub);
    s=strstr(str,sub);
    int c=0;
    if(s != '\0')
    {
        printf("\nstring found\naddress of the substring is\n");
        printf("\n\n~~~~~~~~~ %p ~~~~~~~~~\n\n",s);
        c=1;
    }
    if(c==0)
        printf("\nno such substring\n\n");

    return 0;
}
