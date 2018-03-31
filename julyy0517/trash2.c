#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char str1[40];
    char str2[40];
    printf("enter first string\n\n");
    gets(str1);
    printf("enter second string\n\n");
    gets(str2);

    printf("\n\nthe first string is \n%s",str1);
    printf("\n\nthe second string is \n%s",str2);

    for(i=0;str1[i]!='\0';++i);
    for(j=0;j<str2[j] != '\0';++j,++i)
        {
            str1[i]=str2[j];
        }

    str1[i] = '\0';

    printf("\n\nthe concatenated string is \n%s",str1);

    char *s ="uttam";
    char *p ="surbhi";


    printf("\n\nthe first string is \n%s",s);
    printf("\n\nthe second string is \n%s",p);

    while (*s++ = *p++);
    printf("\n\nthe first string is \n%s",s);
    printf("\n\nthe second string is \n%s",p);
    return 0;
}
