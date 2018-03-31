#include<stdio.h>
int main()
{
    int a[100],i,n,j;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the Elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("a[%d]=%d\n",i,a[i]);
    for(i=0;i<n;i++)//outer for loop
    {
        for(j=i+1;j<n;j++)//inner for loop
        {
            if(a[i]==a[j])//checking if the elements are equal or not
            {
                printf("Array contains duplicate elements\n");
                exit (0);
            }

        }
    }
    printf("Array does not contain duplicate element\n");
    return (0);
}
