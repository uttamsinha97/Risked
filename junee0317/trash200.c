#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char str1[20];
    printf("enter string \n");
    gets(str);
    strcpy(str1,str);
    printf("entered string is %s\n\n",str);
    int i=0;
    char temp;
int     l=strlen(str)-1;
    while(i<l)
    {
        temp=str[i];
        str[i]=str[l];
        str[l]=temp;
        i++;
        l--;
    }
    puts(str);
    if(strcmp(str,str1) == 0)
        printf("string is palindrome\n\n");
    else
        printf("string is not palindrome\n\n");

    return 0;
}
