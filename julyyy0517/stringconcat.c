#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    int i;
    printf("enter string 1\n\n");
    scanf("%s",str1);
    printf("enter string 2\n\n");
    scanf("%s",str2);
    printf("STRING1 %s\n",str1);
    printf("STRING2 %s\n",str2);
    int l = strlen(str1);
    int m= strlen(str2)-1;
    for(i=0;i<=(l+m);i++)
    {
        str1[i+l]=str2[i];
    }
    printf("concatenated string is \n %s",str1);
    return 0;
}
