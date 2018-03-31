#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include<string.h>
int main()
{
    char str[20];
    char rev[20];
    int l,i;
    printf("enter a string\n\n");
    gets(str);
    l=strlen(str);
    puts(str);
    printf("\nlength of the entered string is %d\n",l);
    for(i=1;i<=l;i++)
    {
        rev[i]=str[l-i];

    }
    printf("\n\n%s by mod s\n\n",rev);
    puts(rev);
    return 0;
}
