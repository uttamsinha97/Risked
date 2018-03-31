#include<stdio.h>
int main()
{
    int arr[10];
    int n,i,j,t;
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    printf("enter %d elements in array\n\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your inputted array is \n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n\nsorting array\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("your sorted array is \n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
