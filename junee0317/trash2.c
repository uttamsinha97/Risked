#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int * ptr ;
    printf("enter the size of array\n\n");
    scanf("%i",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("enter elements in array\n\n");
    for(i=1;i<=n;i++)
        scanf("%d",ptr+i);
    printf("elements in the array are\n\n");
    for(i=1;i<=n;i++)
        printf("%4d",*(ptr+i));
    printf("\n\n\n");
    for(i=1;i<=n;i++)
        printf("%p\n",(ptr+i));

    return 0;

}
