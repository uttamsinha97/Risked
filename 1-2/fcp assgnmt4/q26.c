#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000];
    int decimal,z,i=1;
    // c program to convert decimal into binary
    printf("enter the decimal value\n");
    printf("\nits binary will be displayed \n");
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        arr[i++]=decimal%2;
        decimal=decimal/2;
    }
    for(z=i-1;z>1;z--)
    {
        printf("%d",arr[z]);
    }
    return 0;
}
