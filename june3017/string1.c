#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string\n\n");
    scanf("%100[^~!&*]",str);
    puts("your entered string is\n\n");
    puts(str);
    return 0;
}
