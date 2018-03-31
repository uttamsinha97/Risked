#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[30];
    printf("enter a string\n\n");
    scanf("%s",str);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("%s",str);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~\n");
    int i=0;
    int c=0;
    int j=strlen(str)-1;
    int l=strlen(str);
    char temp;
    while(i<j)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
            if(temp==str[j]){
            c=c+1;}
        }
    printf("%s",str);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~\n");
    if(c == (l/2))
        printf("palindrome\n\n");
    else
        printf("not palindrome\n\n");
    return 0;
}
