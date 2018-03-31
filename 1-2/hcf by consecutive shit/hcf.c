#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,t,hcf,a=1;
    printf("enter two numbers");
    scanf("%d%d",&m,&n);

        if(m>n)
            t=n;
        else
            t=m;

        while(a)
        {
            if(m%t==0)
            {
                if(n%t==0)
                a=0;

            }
                else
                    t--;
        }
        hcf=t;
        printf("%d",hcf);
}
