#include<stdio.h>
int main()
{
    int i,j,n ;
    int arr[25];
    printf("enter size\n\n");
    scanf("%d",&n);
    printf("enter elements\n\n");
    for(i=5;i<=(n+5);i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ur array\n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",arr[i]);
    }
    int temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n\nr sorted array\n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n\n%d  \n\n",arr[n-1]);
    return 0;
}
