#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n;
    int *ptr;
    printf("enter the size of array\n\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    int i;
    for(i=1;i<=n;i++)
        scanf("%d",(i+ptr));
    printf("the entered array is \n\n");
    for(i=1;i<=n;i++)
        printf("%d   ",*(i+ptr));
    return 0;
}
