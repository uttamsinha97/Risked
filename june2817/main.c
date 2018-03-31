#include <stdio.h>
#include <stdlib.h>

// c program to find second largest number

int main()
{
    int arr[20];
    int i,j, temp,n;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements of the array are\n");
    for(i=1;i<=n;i++)
    {
        printf("%3d\t",arr[i]);
    }
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
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        printf("%3d\t",arr[i]);
    }
printf("\nSecond largest number is %d",arr[n-1
       ]);
return 0;
}
