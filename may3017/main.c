#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int d;
    d=0;
    int m,n,i,j;
    char text[100];
    char pattern[100];
    printf("Brute force string matching\n\n");
    printf("enter a string-TEXT\n\n");
    gets(text);
    printf("enter a string-PATTERN\n\n");
    gets(pattern);
    n=strlen(text);
    m=strlen(pattern);
    for(i=0;i<n-m;i++)
    {
        j=0;
        while(j<m && (pattern[j]==text[i+j]))
        {
            j++;
        }
        if(j==m)
            d=1;
    }
    if(d==1)
        printf("pattern found\n\npattern found at position %d\n\n",i);
    else
        printf("no such pattern in text\n\n");
    return 0;

}
