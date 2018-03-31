#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("factors of %d are\n\n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d  ",i);

    }
    return 0;
}
