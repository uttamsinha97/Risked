#include <stdio.h>
int printnum(int );
int main()
{
    long int n;
    printf("enter the value of n\n");
    scanf("%i",&n);
    printnum(n);
    return 0;

}

long int printnum(long int n)
{
    return printnum(printf("%d ",n));

}
