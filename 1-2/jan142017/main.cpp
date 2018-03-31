#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int arr[100],n,i;
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    printf("enter the numbers in the array\n\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array is \n\n");
    for(i=1;i<=n;i++)
        printf("%d  ",arr[i]);

}
