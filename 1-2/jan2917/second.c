#include <stdio.h>
int main()
{
    char str[100],rev[100];
    int i,c=0,flag;
    printf("enter string\n");
    gets(str);
    for(i=1;str[i]!='\0';i++)
    {
        c++;
    }
    printf("length is %d\n",c+1);
    for(i=c;i>=0;i--)
    {
        rev[c-i]=str[i];
    }
    for(flag=1,i=1;i<=c;i++)
    {
        if(rev[i]!=str[i])
            flag=0;
    }
    if(flag==1)
        printf("palindrome\n");
    else
        printf("not palindrome\n\n");
    return 0;
}
