#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int binaryy,hexadecimal=0,i=1,remainder;
    printf("enter the binary number\n");
    scanf("%ld",&binaryy);
    while(binaryy>0)
    {
        remainder=binaryy%10;
        hexadecimal=hexadecimal+remainder*i;
        i=i*2;
         binaryy=binaryy/10;
    }
    printf("equivalent hexadecimal value %ld \n",hexadecimal);//correct output
    //decimal to binary
    return 0;

}
