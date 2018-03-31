#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,term;
    printf("enter the number of terms\n\n");
    scanf("%d",&n);
    printf("0");
    for(i=1;i<=n;i++)
    {
        term=fiboo(i);
        printf("%10d",term);
    }
    return 0;
}
int fiboo(int num)
{
    if(num==0 || num==1)
        return num;
    else
        return fiboo(num-1)+fiboo(num-2);
}
