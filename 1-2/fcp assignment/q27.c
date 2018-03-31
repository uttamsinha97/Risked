#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000];
    int decimal,z,i=1;
    // c program to convert decimal into OCTAL
    printf("enter the decimal value\n");
    printf("\nits   OCTAL will be displayed \n");
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        arr[i++]=decimal%8;
        decimal=decimal/8;
    }
    for(z=i-1;z>0;z--)
    {
        printf("%d",arr[z]);
    }
    return 0;
}
