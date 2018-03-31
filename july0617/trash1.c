#include<stdio.h>
#include <string.h>
int main()
{
    char str[30];
    char str1[30];
    int i;
    printf("enter a string\n\n");
    scanf("%[^\n]",str);
    printf("\nentered string is\n%s\n",str);
    int j=0;
    for(i=0; str[i] != '\0' ;i++)
    {
        if(str[i] != 32)
            str1[j++]=str[i];

    }


    printf("\nentered string WITHOUT SPACES is\n%s\n",str1);

    return 0;

}
