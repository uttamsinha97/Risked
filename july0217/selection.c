#include<stdio.h>
int main()
{
    int arr[20];
    int n,i,t,min,j;
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    printf("enter elements in array\n\n");
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("elements in the array are\n\n");
    for(i=1;i<=n;i++)
        printf("%6d",arr[i]);

    for(i=1;i<=n;i++)
    {
        min=i;
        for(j=i+1;j<=n;j++)
        {
            if(arr[j]>arr[min])
                min=j;
        }
        t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
    }

    printf("elements in the SROTED array are\n\n");
    for(i=1;i<=n;i++)
    printf("%6d",arr[i]);

}
