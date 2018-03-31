#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,i,j,t;
    int arr[25];
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("\n\nstart entering numbers in array\n\n");
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("\n\nthe inputted array is \n\n");
    for(i=1;i<=n;i++)
        printf("%d   ",arr[i]);
    printf("\n\nsorting array\n\n");
//    delay(100);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("\n\ndisplaying sorted array\n\n");
        for(i=1;i<=n;i++)
        printf("%d   ",arr[i]);
        return 0;
}
