#include<stdio.h>
int main()
{
    int n,c,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        c=0;
        while(n!=0)
        {
            if((n & 1) == 1)
            {
                c=c+1;
            }
            n=n>>1;
        }
    printf("%d",c);
    }
    printf("\n");
}
