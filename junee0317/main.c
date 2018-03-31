#include <stdio.h>
#include <stdlib.h>

void function(int arr[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("\n\n");
        printf("%6d", 2*arr[i]);
    }
    return ;
}

int main()
{
    int n,i;
    int arr[100];
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    printf("enter %i elements in array\n\n",n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);

    printf("elements in array\n\n");
    for(i=1;i<=n;i++)
        printf("%5d",arr[i]);
    function(arr,n);
    return 0;

}


