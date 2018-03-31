#include <stdio.h>
#include <stdlib.h>
int hcf(int m,int n);

int main()
{
    int m,n,l;
    printf("enter two numbers\n");
    scanf("%d %d",&m,&n);
    l=hcf(m,n);
    printf("%d\n",l);
    return 0;
}
    int hcf(int m,int n)
    {
        int t,true=1;
        if(m>n)
            t=n;
        else
            t=m;
            while(true)
        {
            if(m%t==0)
                if(n%t==0)
                    t--;

        }
        return t;
    }
