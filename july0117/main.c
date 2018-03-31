#include <stdio.h>
#include <stdlib.h>

int main()
{
    int new1=0;
    int n,t,rem,z;
    printf("enter the number\n\n");
    printf("arm strong number calculation\n\n");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        rem=t%10;
        z=rem*rem*rem;
        new1=new1+z;
        t=t/10;
    }
    printf("final evaluated number is %d\n\n",new1);
    printf("original ,entered number was %d\n\n",n);
    if(new1==n)
        printf("number is armstrong\n\n");
    else
        printf("number is not armstrong\n\n");
    return 0;
}
