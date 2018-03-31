#include <stdio.h>
int main()
{
    int arr[20];
    int n;
    int min,i,j;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements of the array \n");
    for(i=1;i<=n;i++)
    {
        printf("%5d",arr[i]);
    }
    for(i=1;i<n;i++)
    {
        min=i;
        for(j=i+1;j<=n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("\n\nelements of the SORTED array \n");
    for(i=1;i<=n;i++)
    {
        printf("%5d",arr[i]);
    }
    return 0;
}
