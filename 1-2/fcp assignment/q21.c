#include <stdio.h>
#include <stdlib.h>
//PROGRAM TO COVERT BINARY NUMBER INTO DECIMAL NUMBER

int main()
{
    long int binaryy,decimal=0,j=1,remainder;
    printf("enter the binary number\n");
    scanf("%ld",&binaryy);
    while(binaryy>0)
    {
        remainder=binaryy%10;
        decimal=decimal+remainder*j;
         binaryy=binaryy/10;
        j=j*2;
    }
    printf("euivalent decimal value %ld \n",decimal);//correct output
    //decimal to binary
    return 0;

}
