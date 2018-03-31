#include<stdio.h>
int main()
{
    int c,i,j,m,n,t,k;
    scanf("%d",&t);

    for(k=1;k<=t;k++)
    {
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        printf("%d ",i);
    }
    }
}
