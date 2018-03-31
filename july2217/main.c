#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;char temp;
    char str[30];
    printf("enter a string\n\n");
    scanf("%[^\n]",str);
    printf("entered string is %s\n",str);
    long int l= strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            temp=str[i+1];
            str[i+1]=str[0];
            str[0]=temp;
        }
    }
    printf("entered string is %s\n",str);


}
