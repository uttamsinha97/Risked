#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n,i;
    a=0;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("enter the number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        c=a+b;
        printf("d\n",c);
        a=b;
        b=c;
    return;
}
