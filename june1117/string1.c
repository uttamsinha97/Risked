#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void searchp(char text[], char pattern[]);
int main()
{
    char text[25];
    char pattern[25];
    printf("enter the TEXT string\n\n");
    gets(text);
    printf("enter the PATTERN string\n\n");
    gets(pattern);
    printf("entered text string is\n");
    puts(text);
    printf("\n\nentered pattern string is\n\n");
    puts(pattern);
    searchp(text,pattern);
    printf("outside function.below\n\n");
    return 0;
}
void searchp(char text[], char pattern[])
{
    int i,j;
    int m,n;
    n=strlen(text);
    m=strlen(pattern);
    printf("inside function\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(text[i+j] != pattern[j])
                break;
            if(j==m)
                printf("pattern found at %dth index\n\n",i);
        }

    }
}
