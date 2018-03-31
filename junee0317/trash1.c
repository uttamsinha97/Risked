#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void function(int arr[],int n,int fre[])
{
    int i;
    for(i=1;i<=n;i++)
    {
        fre[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        fre[arr[i]]++;
    }

    printf("the corresponding frequency array\n\n");
    for(i=1;i<=n;i++)
    {
     printf("frequency of %3i is %3i \n",i,fre[i]);
    }
    return ;
}

int main()
{
    int n,i;
    int arr[100];
    int fre[100];
    printf("enter the size of array\n make sure the size stays the largest element of array\n\n\n");
    scanf("%d",&n);
    printf("enter %i elements in array\n\n",n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);

    printf("elements in array\n\n");
    for(i=1;i<=n;i++)
        printf("%5d",arr[i]);
    function(arr,n,fre);
    return 0;

}


