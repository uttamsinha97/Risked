#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,temp,n;
    printf("enter the number of elements in array\n\n");
    scanf("%d",&n);
    printf("enter the elements now\n\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements are\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            { // swap function
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted elements are\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
