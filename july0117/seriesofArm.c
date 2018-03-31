#include <stdio.h>
#include <stdlib.h>
int main()
{
    int new1=0;
    int i,f,t,rem,z;
    printf("enter the boundary condition. armstrong number calc\n\n");
    scanf("%d",&f);
    for(i=1;i<=f;i++)
    {
        t=i;
        while(t>0)
        {
            rem=t%10;
            z=rem*rem*rem;
            new1=new1+z;
            t=t/10;
        }
        if(new1 == i)
            printf("%d\n",i);
    }
    return 0;
}
