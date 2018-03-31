#include<stdio.h>
int main()
{
    int n;
    int t,rem;
    int new1=0;
    printf("enter number:\n ");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        rem=t%10;
        new1=(new1*10)+rem;
        t=t/10;
    }
    printf("reversed number %d\n\n",new1);
    if(new1 == n)
        printf("\n\nnumber is palindrome\n\n");
    else
        printf("\n\nnumber is not palindrome\n\n");
    return 0;

}
