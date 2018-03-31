#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *s;
    int *l;

    int arr[25];
    int i,n,temp,small,large;
    printf("enter the size of the array\n");
    scanf("%i",&n);
    printf("start entering elements in the arary\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ye array is \n\n");
    for(i=1;i<=n;i++)
    {
        printf("%3d",arr[i]);
    }
    *s=*l=arr;
    small=*s;
    large=*l;
    for(i=1;i<=n;i++)
    {
        if(small>arr[i])
        {
            small=arr[i];
            s=&arr[i];
        }

        if(*l<arr[i])
        {
            large=arr[i];
            l=&arr[i];

        }

    }
    temp=*s;
    *s=*l;
    *l=temp;
        for(i=1;i<=n;i++)
    {
        printf("%3d",arr[i]);
    }
    return 0;



}
