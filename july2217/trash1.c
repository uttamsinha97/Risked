#include<stdio.h>
#include<string.h>
int main()
{
    char temp;
    int i,j;
    char str[30];
    printf("enter a string\n\n");
    scanf("%[^\n]",str);
    printf("entered string is %s\n",str);
    long int l= strlen(str);
    for(i=1;str[i]!='\0';i++)
    {
        for(j=1;j<=(l-i);j++)
        {
            if(strcmp(str[j],str[j+1])<0)
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
     printf("entered string is %s\n",str);
}
