#include <stdio.h>
#include <stdlib.h>
//PROGRAM TO PRINT THE SUM OF ALL PRIME UMBERS TILL THE LIMTING VALUE
int main()
{
    int l,i,j,c,sum=0;
    printf("program to print sum of all the prime numbers till the limiting vale\n\n");
    printf("enter the limiting value\n");
    scanf("%d",&l);
    for(i=1;i<l;i++)
    {
        c=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                c=c+2;

        }
        if(c==2)
            sum=sum+i;
    }
    printf("sum of all prime numbers betweeen 1 and %d is %d\n\n",l,sum);
    return 0;
}
