#include <stdio.h>
int main()
{
    int r;
    int range1,t,new1,i;
    printf("enter the range \n\n");
    scanf("%d",&range1);
    for(i=1;i<=range1;i++)
    {
        new1=0;
        t=i;
        while(t>0)
        {
            r=t%10;
            new1=new1+(r*r*r);
            t=t/10;
        }
        if( new1 == i)
            printf("%d  ",i);
    }
    return 0;
}
