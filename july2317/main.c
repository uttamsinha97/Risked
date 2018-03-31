#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,rem,new1,i,t1;
    scanf("%d",&t1);
    for(i=1;i<=t1;i++)
    {
    scanf("%d",&n);
    t=n;
    new1=0;
    while(t>0)
    {
        rem=t%10;
        new1=(new1*10)+rem;
        t=t/10;
    }
    if(n==new1)
        printf("Yes\n");
    else
        printf("No\n");
    }

    return 0;
}
