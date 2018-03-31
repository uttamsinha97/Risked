#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,temp,n;
    int arr[20];
    int c=0;
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("\n\narray is\n\n");
    for(i=1;i<=n;i++)
    printf("%d  ",arr[i]);
    for(i=1;i<=(n);i++)
    {
        for(j=1;j<(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n\nSORTED array is\n\n");
    for(i=1;i<=n;i++)
    printf("%d  ",arr[i]);
    for(i=1;i<=n;i++)
    {
            if(arr[i]==arr[i+1])
            c=1;
    }
    if(c==1)
        printf("duplicate element is present\n\n");
    else
        printf("duplicate element is not present\n\n");
    return 0;

}
