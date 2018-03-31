#include<stdio.h>
int main()
{
    int n1,n2,i;
    int arr1[20];
    int arr2[20];
    printf("enter the size of first array\n\n");
    scanf("%d",&n1);
    printf("enter %d elements in array\n\n",n1);
    for(i=1;i<=n1;i++)
        scanf("%d",&arr1[i]);

    printf("enter the size of second array\n\n");
    scanf("%d",&n2);
    printf("enter %d elements in array\n\n",n2);
    for(i=1;i<=n2;i++)
        scanf("%d",&arr2[i]);

    printf("\nelements in first array\n");
    for(i=1;i<=n1;i++)
        printf("%4d",arr1[i]);

    printf("\n\nelements in second array\n");
    for(i=1;i<=n2;i++)
        printf("%4d",arr2[i]);
    int c=0;
    if(n1 == n2)
    {
        for(i=1;i<=n1;i++)
        {
            if(arr1[i] == arr2[i])
                c=c+1;
        }
        if(c==n1)
            printf("\n\narray is equal\n\n");
        else
            printf("\n\narrays are different\n\n");

    }
    else
        printf("\n\narrays are different\n\n");

    return 0;
}
