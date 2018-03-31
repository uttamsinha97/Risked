#include<stdio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    int c=0;
    printf("enter any name in ****** ******* format\n\n");
    gets(str);
    int l;
    l=strlen(str);
    for(i=0;i<=l;i++)
        printf("%c ",str[i]);
    for(i=0;i<l;i++)
    {
        if(str[i] != 32)
            c=c+1;

    }
    printf("size is %d   \n\n",c);
    printf("\n\n%d\n\n",' ');
    return 0;


}
