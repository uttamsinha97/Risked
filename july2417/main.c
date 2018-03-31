#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char temp;
    char str[25];
    scanf("%[^\n]",str);
    long int j =strlen(str)-1;
    int i=0;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;

    }
    printf("%s",str);
    return 0;
}
