#include<stdio.h>
#include<string.h>
#include<strings.h>

int main()
{
    char name[100];
    int m,i,d,c=0;
    char a,b;
    printf("\n\nenter the string-NAME\n");
    gets(name);
    m=strlen(name);
    for(i=0;i<=m;i++)
    {
        if(name[i] != ' ')
        c=c+1;
    }
    d=c+2;
    a=name[d];
    b=name[0];
    printf("first character is %c\n\n",b);
    printf("second character is %c\n\n",a);
    return 0;
}
