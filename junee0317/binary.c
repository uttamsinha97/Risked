#include<stdio.h>
int main()
{
    int arr[25];
    int i,j,temp,n;
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    printf("enter %d elements in array\n\n",n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("the elements in array are\n\n");
    for(i=1;i<=n;i++)
        printf("%4d",arr[i]);
    printf("sorting array\n\n");
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
    printf("the elements in array are\n\n");
    for(i=1;i<=n;i++)
    printf("%4d",arr[i]);
    int key,mid;
    printf("\n\nenter  the key element to search\n\n");
    scanf("%d",&key);
    int low =1;
    int high =n;
    int c=0;
    while(low <= high)
    {
        mid=(low+high)/2;
        if(key == arr[mid])
        {
            printf("\nelement found at position %d of array\n",mid);
            c=1;
            break;
        }
        else if(key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1 ;
    }
    if(c==0)
    {
        printf("\n~~~~~~~~~~~~ no such element ~~~~~~~~~~~~~~~~\n");
    }
    return 0;

}
