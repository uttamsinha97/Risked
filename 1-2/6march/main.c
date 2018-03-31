#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int a[i];
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("kindly enter numbers in the array\nenter %d numbers only\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("you array is\n");
    for(i=1;i<=n;i=i+1)
    {
        printf("%d ",a[i]);
    }
    return 0;


}
