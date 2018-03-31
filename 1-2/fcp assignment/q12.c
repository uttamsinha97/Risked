#include <stdio.h>
#include <stdlib.h>
//PROGRAM TO PRINT PRIME NUMBERS TILL THE LIMITING VALUE

int main()
{
    int n,i,j,c;
    printf("program to print prime numbers till the limiting value\n");
    printf("enter the limiting value\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c=c+1;
        }
        if(c==2)
            printf("%d  ",i);
    }
    return 0;
}
