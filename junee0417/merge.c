#include<stdio.h>
int main()
{
    int n1,n2,m;
    int arr1[20], arr2[20], arr3[41];
    printf("\nenter the size of first array\n\n");
    scanf("%i",&n1);
    printf("\nenter %i elements in array\n\n",n1);
    for(m=1;m<=n1;m++)
        scanf("%i",&arr1[m]);
    printf("\nelements in the array\n\n");
    for(m=1;m<=n1;m++)
        printf("%5d",arr1[m]);

    printf("\nenter the size of second array\n\n");
    scanf("%i",&n2);
    printf("\nenter %i elements in array\n\n",n2);
    for(m=1;m<=n2;m++)
        scanf("%i",&arr2[m]);
    printf("\nelements in the second array\n\n");
    for(m=1;m<=n2;m++)
        printf("%5d",arr2[m]);
    int i;
    for(i=1;i<=n1;i++)
    {
        arr3[i]=arr1[i];

    }

    for(i=1;i<=n2;i++)
    {
        arr3[i+n1]=arr2[i];
    }


    printf("\nelements in the FINAL array\n\n");
    for(m=1;m<=(n1+n2);m++)
        printf("%5d",arr3[m]);

    return 0;
}
