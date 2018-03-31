#include<stdio.h>
int main()
{
    int arr[20];
    int n,i,j,temp;
    printf("enter the size of array\n\n");
    scanf("%i",&n);
    printf("enter %i elements in array\n\n",n);
    for(i=1;i<=n;i++)
        scanf("%i",&arr[i]);
    printf("elements in the array\n\n");
    for(i=1;i<=n;i++)
        printf("%5d",arr[i]);

    printf("sorting array\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("elements in the SORTED array\n\n");
    for(i=1;i<=n;i++)
        printf("%5d",arr[i]);

    int key;
    printf("enter the element to search\n\n");
    scanf("%d",&key);
    int low=1;
    int high=n;
    int mid;
    int c=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key == arr[mid])
        {
            printf("element %d found at position %d of array\n\n",key,mid);
            int c=1;
            break;
        }
        else if(key > arr[mid])
            low=mid+1;

        else
            high=mid-1;
    }
    if(c==0)
        printf("element not found\n\n");
    return 0;
}
