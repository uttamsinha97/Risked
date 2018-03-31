#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int c,l,d,i,j;
    printf("enter a string\n\n");
    scanf("%[^\n]",str);
    printf("entered string is %s\n",str);
    l=strlen(str);
    for(i=0;i<str[i] != '\0';i++)
    {
        c=0;
        d=0;
        for(j=i;j<=l;j++)
        {
            if(str[i] == str[j])
            {
                 c=c+1;
                 d=d=1;
            }
        }
    }
    if(c != 0)
    printf(" \n character is %c\n\n",str[d]);
    return 0;
}
