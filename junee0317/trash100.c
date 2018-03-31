#include <stdio.h>
int main()
{
    int n,r;
    int new1=0;

    printf("the number is %d",n);
    int t=n;
    {
        r=t%10;
        new1=new1+(r*r*r);
        t=t/10;

    }
    if(new1 == n)
        printf("\n\narm strong number\n\n");
    else
        printf("\n\nNOT AN arm strong number\n\n");
    return 0;
}
