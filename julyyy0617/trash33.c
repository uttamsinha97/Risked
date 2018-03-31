#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str1[30];
    char str2[30];
    printf("enter string1\n\n");
    scanf("%s",str1);
    printf("enter string2\n\n");
    scanf("%s",str2);
    printf("\n\n");
    puts(str1);
    printf("\n\n");
    puts(str2);
    printf("\n\n");
    for(i=0;str1[i] != '\0';++i);
    {
        for(j=i;str2[j] != '\0' ;++i,++j)
        {
            str1[i]=str2[j];
        }
    }
    str1[i]='\0';
    printf("\n\n");
    printf("%s",str1);
    printf("\n\n");
}
