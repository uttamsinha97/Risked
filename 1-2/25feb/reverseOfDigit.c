#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0;
    printf("enter any integer number\n");
    scanf("%d",&n);
    while(n>0)
    {
        rev=rev*10;
        rev=rev+ n%10;
        n=n/10;
    }
    printf("reverse is %d",rev);

    return 0;
}
