#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int arr[25];
    printf("enter the size of one D array\n");
    scanf("%d",&n);
    printf("kindly start entering names in the array\nyou need to enter only %d sexy names\n\n",n);
    for(i=1;i<=n;i++)
    {
        getw(arr[i]);
    }
    printf("yer array is\n");
    for(i=1;i<=n;i++)
    {
       printf("%s",arr[i]);
    }
    return 0;
}
