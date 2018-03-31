#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i,c,j;
    printf("program to print perfect numbers till the limiting value\n");
    printf("enter the limiting value\n");
    scanf("%d",&l);
    for(i=1;i<l;i++)
    {
        c=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                c=c+j;
        }
        if(c==i)
            printf("%d  ",i);
    }
    return 0;

}
