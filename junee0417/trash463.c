#include <stdio.h>
int main()
{
    int arr[20];
    int i,n;
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);

    printf("entered elements in array are \n\n");
    for(i=1;i<=n;i++)
        printf("%4d",arr[i]);

    int large=arr[1];
    int c=1;
    for(i=1;i<=n;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
            c=c+1;
        }
    }
    int slarge;
    arr[c]=0;
    slarge=arr[1];
    for(i=1;i<=n;i++)
    {
        if(arr[i]>slarge)
        {
            large=arr[i];
        }
    }
    printf("\n\n~~~~~~~~%d~~~~~~~~~~~\n\n",slarge);

    return 0;
}
