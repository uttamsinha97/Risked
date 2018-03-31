#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char str[30];
    char str2[30];
    printf("enter a string\n\n");
    scanf("%[^\n]",str);
    printf("entered string \n\n%s", str);
    int j=0;
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] != 32)
        {
            str2[j++]=str[i];
        }

    }
    printf("\n\nentered string WITHOUT SPACES\n\n%s", str2);
    return 0;

}
