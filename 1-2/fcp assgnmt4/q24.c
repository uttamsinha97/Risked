#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int octal,decimal=0;
    int i=0;
    printf("enter  the OCTAL value\n\n");
    scanf("%ld",&octal);
    while(octal!=0)
    {
        decimal=decimal+(octal%10)*pow(8,i++);
        octal=octal/10;
    }
    printf("equivalent decimal value %ld \n",decimal);
    return 0;//correct output
    //compiled
    //converting OCTAL to DECIMAL
}
