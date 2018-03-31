#include <stdio.h>
#include <stdlib.h>
//paimdrome
int main()
{
    int n,t,rev=0;
    printf("enter an integer number\n its reverse will be displayed\n\n");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        rev=rev*10 +(n%10);
        n=n/10;
    }
    if(rev==t)
        printf("%d is PALINDROME\n",t);
    else
        printf("%d is NOT PALINDROME\n",t);
    return 0;

}
