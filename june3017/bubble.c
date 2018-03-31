#include<stdio.h>
int main()
{
    int arr[20];
    int temp,i,j,n;
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
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                    temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

            }

        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
