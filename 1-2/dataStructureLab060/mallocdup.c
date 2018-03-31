#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    char *ptr;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    ptr=(char *)malloc(n*sizeof(char));  //memory allocated using malloc
    if(ptr==NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("elements of array: MALLOC ");
    for(i=0;i<n;++i)
    {
            printf("%d\t",*(ptr+i));
    }

    free(ptr);
    return 0;
}
