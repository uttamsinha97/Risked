#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int binarynum,octalnum=0,j=1,remainder,binary;
    printf("enter the value of binary number\n\n");
    scanf("%ld",&binarynum);
    while(binarynum!=0)
    {
        remainder=binarynum%10;
        octalnum=octalnum+remainder*j;
        j=j*2;
        binary=binarynum/10;
    }
    printf("equivalent OCTAL VALUE \n\n %lo",octalnum);
    return 0;
}
