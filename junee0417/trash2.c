#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char temp;
    printf("enter the string \n\n");
    scanf("%s",str);
    printf("entered string is %s",str);
    int l=strlen(str)-1;
    int i=0;
    while(i<l)
    {
        temp=str[l];
        str[l]=str[i];
        str[i]=temp;
        i++;
        l--;
    }
    printf("\n\nreversed string is %s",str);
    return 0;

}
