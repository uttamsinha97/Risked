#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,c=0;

    scanf("%d",&t);
    while(t--)
    {
        char str1[80],str2[80];
        scanf("%[^\n]",str1);
        for(i=0;str1[i]!='\0';++i)
        {
            if(str1[i] != 32)
            {
                str2[++c]=str1[i];
            }
        }
        printf("%s\n",str2);
    }
}
