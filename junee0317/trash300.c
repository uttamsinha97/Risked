#include<stdio.h>
#include<stdlib.h>
void printfunction(int arr[],int n);
int main()
{
    int *arr;
    int i,n;
    printf("enter size of array\n" );
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=1;i<=n;i++)
    {
        scanf("%d",arr+i);
    }
    printfunction(arr,n);
    return 0;
}
void printfunction(int arr[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d   ",*(arr+i));
    }

}
