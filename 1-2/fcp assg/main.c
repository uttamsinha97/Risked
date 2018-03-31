#include <stdio.h>
#include <stdlib.h>
//program to print reverse of a number
int main()
{
    int n,rev=0;
    printf("enter an integer number\n its reverse will be displayed\n\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10 +(n%10);
        n=n/10;
    }
    printf("%d",rev);
    return 0;


}
