#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool fnmystrcmp(char str1[],char str2[]);
int main()
{
    char acstr1[50],acstr2[50];//local declaration
    bool notidentical;
    printf("\nEnter string1\n");
    gets(acstr1);
    printf("\nenter string 2\n");
    gets(acstr2);
    notidentical=fnmystrcmp(acstr1,acstr2);
    if(notidentical)
    printf("\n the strings are not identical\n");
    else
    printf("\nThe strings are identical\n");
    return 0;
}
bool fnmystrcmp(char str1[],char str2[])//function definition
{
    int i,j;//declaring variables inside the function
    bool notsame=false;
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++);

    if(i!=j)
    {
        notsame=true;
        return notsame;
    }
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            notsame=true;
            return notsame;
        }
    }
    return notsame;
    }
