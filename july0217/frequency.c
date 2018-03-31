#include<stdio.h>
void fun1(int arr[],int n,int frequency[]);
int main()
{
    int n ,i;
    int arr[20];
    int frequency[20];
    printf("enter the size of array\n\nmake sure the size is the largest element of array\n\n");
    scanf("%d",&n);
    printf("enter %d elements in array\n\n",n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("elements in the array are\n\n");
    for(i=1;i<=n;i++)
    printf("%5d",arr[i]);
    fun1(arr,n,frequency);

    return 0;
}
void fun1(int arr[],int n,int frequency[])
{
    int f,i;
    for(f=1;f<=n;f++)
        frequency[f]=0;
    for(i=1;i<=n;i++)  // frequency array
        frequency[arr[i]]++ ;

    printf("frequency array\n\n");
    for(i=1;i<=n;i++)
    printf("\n\nnumber of %d  %5d",i,frequency[i]);

}
