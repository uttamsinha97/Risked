#include<stdio.h>
int main()
{
    int arr[25];
    int b[25];
    int c[25];
    int i,j,n;
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("the entered array is\n\n");
    for(i=1;i<=n;i++)
        printf("%4d",arr[i]);
    if(n>1)
    {
        for(i=1;i<=(n/2);i++)
        {
            b[i]=arr[i];
        }
        for(i=1;i<=(n/2);i++)
        {
            c[i]=arr[(n/2)+i];
        }
        mergesort(b[25]);
        mergesort(c[25]);
        merge1(b[25],c[25],arr[25]);
    }
    return 0;
}

