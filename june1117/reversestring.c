#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char temp;
    int i,j;
    printf("enter a string\n\n");
    gets(str);
    printf("entered string is %s\n\n",str);
    i=0;
    j=strlen(str)-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("reversed string %s\n\n",str);
    return 0;
}
