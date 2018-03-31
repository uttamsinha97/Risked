#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20];
    int n,i,key;
    printf("enter the size of array\n\n");
    scanf("%i",&n);
    printf("enter %i elements in array\n\n",n);
    for(i=1;i<=n;i++)
        scanf("%i",&arr[i]);
    printf("elements in the array\n\n");
    for(i=1;i<=n;i++)
        printf("%5d",arr[i]);
    printf("enter the element to search\n\n");
    scanf("%d",&key);
    for(i=1;i<=n;i++)
    {
        if(arr[i]==key)
            printf("element %d found at position %d of array\n\n\ ",key,i);
    }
    return 0;
}
