#include <stdio.h>
#include <stdlib.h>
//program to check whether the inputted number is a perefect number oR NOT
int main()
{
    int n,i,c=0;
    printf("enter a number to check whether it is perfect number or not\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            c=c+i;
    }
    if(n==c)
        printf("%d is a perfect number\n\n",n);
    else
        printf("%d is not a perfect number\n",n);
    return 0;
}
