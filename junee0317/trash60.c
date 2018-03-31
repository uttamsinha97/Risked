#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char temp;
    printf("enter string\n\n");
    gets(str);
    printf("entered string \n\n");
    puts(str);
    int j=strlen(str)-1;
    int i=0;
    printf("reverse of string\n\n");
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    puts(str);
    return 0;


}
