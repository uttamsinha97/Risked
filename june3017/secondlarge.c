#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="surbhi";
    char str2[]="mit";
    printf("%s",str1);
    printf("\n%s",str2);
    char temp[20];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
       printf("\n%s",str1);
    printf("\n%s",str2);
    return 0;

}
