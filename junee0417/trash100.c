#include <stdio.h>

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
    int i=1;
    int j=1;
    int k=1;
    while(i<=n1 && j<=n2)
    {
        {
            if(arr1[i] <= arr2[j])
            {
                arr3[k]=arr1[i];
                i++;
                k++;
            }
            else
            {
                arr3[k]=arr2[j];
                j++;
                k++;
            }
        }
            while(i<=n1)
            {
                arr3[k]=arr1[i];
                i++;
                k++;
            }
            while(j<=n2)
            {
                arr3[k]=arr2[j];
                j++;
                k++;
            }
    }
    printf("\n\n~~~~~~~~~~~~~~~array~~~~~~~~~~~~~~~~~~~~\n\n");
    for(i=1;i<=(n1+n2);i++)
        printf("%5d",arr3[i]);

}
