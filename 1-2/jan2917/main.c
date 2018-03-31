#include <stdio.h>
#include <string.h>
#include <strings.h>
int main()
{
    char str[1000];
    char b[1000];
    printf("enter string\n");
    gets(str);
    strcpy(b,str);
    strrev(b);
    if(strcmp(str,b)==0)
        printf("palindrome\n");
    else
            printf("not palindrome\n");
    return 0;
}
