#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j;
    int arr[25];
    printf("enter the size of one D array\n");
    scanf("%d",&n);
    printf("kindly start entering numbers in the array\nyou need to enter only %d integral elements\n\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("yer array is\n");
    for(i=1;i<=n;i++)
    {
       printf("%3d",arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]==arr[j])
            printf("\ndupilcate element %d\n",arr[j]);
        }

    }
    exit(0);
    printf("no duplicate element\n");


    return 0;
}
