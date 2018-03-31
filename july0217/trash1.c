#include<stdio.h>
void fun1(const int arr[],int);
int main()
{
    int n ,i;
    int arr[10];
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    printf("enter %d elements in array\n\n",n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("elements in the array are\n\n");
    for(i=1;i<=n;i++)
    printf("%5d",arr[i]);
    fun1(arr,n);

    return 0;
}
void fun1(const int arr[],int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("\n%5d",10*arr[i]);
}
