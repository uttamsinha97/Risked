#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("enter size of array\n\n");
    scanf("%d",&n); // enter the size of array
    int *ptr; // an array or a pointer ?
    ptr=(int *)malloc(n*(sizeof(int)));
    printf("start entering %d numbers in array\n\n",n);
    for(i=1;i<=n;i++)
        scanf("%d",i+ptr);
    printf("your dynamically created array\n\n");
        printf("\n\n------------------------------------------\n\n");
        for(i=1;i<=n;i++)
        printf("%5d",*(i+ptr));
    printf("\n\n------------------------------------------\n\n");
    return 0;
}
