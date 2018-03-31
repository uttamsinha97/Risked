#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,m,small,large,temp;
    int arr[20];
    int *p1;
    int *p2;
    p1=p2=arr;
    printf("enter the size of the array\n");
    scanf("%i",&m);
    printf("start enetring numbers in the array\n");
    for(i=1;i<=m;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements of the array\n");
        for(i=1;i<=m;i++)
    {
        printf("%3d",arr[i]);
    }
    printf("\n\n");
    small=*p1;
    large=*p2;
    for(i=1;i<=m;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            p1=&arr[i];

        }
        if(arr[i]>large)
        {
            large=arr[i];
            p2=&arr[i];
        }
        }
        temp=*p1;
        *p1=*p2;
        *p1=*p2;
        for(i=1;i<m;i++)
        {
            printf("%3d",arr[i]);
        }
        return 0;

}
