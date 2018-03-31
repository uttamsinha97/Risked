#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[20],arr2[20];
    int n1,n2,i;
    printf("enter the size of first array ");
    scanf("%d",&n1);
    printf("enter the first array elements\n\n");
    for(i=1;i<=n1;i++)
        scanf("%d",&arr1[i]);

    printf("enter the size of second array");
    scanf("%d",&n2);
       printf("enter the second  array elements\n\n");
    for(i=1;i<=n2;i++)
        scanf("%d",&arr2[i]);

    printf("\n\nelements in the first array are\n");
    for(i=1;i<=n1;i++)
            printf("%4d",arr1[i]);

    printf("\n\nelements in the second array are\n");
    for(i=1;i<=n2;i++)
            printf("%4d",arr2[i]);
    int c=0;
    if(n1==n2)
    {
        for(i=1;i<=n1;i++)
        {
            if(arr1[i] == arr2[i])
                c=c+1;
        }
        if(c==n1)
            printf("\n\narrays are equal\n\n");
    }

    if(c==0)
        printf("\n\narrays are NOT equal\n\n");

    return 0;
}
