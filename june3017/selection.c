#include<stdio.h>
int main()
{
    int arr[20];
    int i,j,n,min,temp;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    printf("enter thr elements\n");

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    for(i=1;i<=(n-1);i++)
    {
        min=i;
        for(j=(i+1);j<=n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("\n\n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
