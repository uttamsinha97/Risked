#include<stdio.h>

void subString(char str[], int n)
{
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j=i + len - 1;
            for (int k = i; k <= j; k++)
                printf("%s ",str[k]);
            printf("\n\n");
        }
    }
}
int main()
{
    char str[] = "abcd";
    subString(str, strlen(str));
    return 0;
}
