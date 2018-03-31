#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint16_t num1= 100 ;
    uint16_t num2= 299 ;
    uint16_t res = num1 & num2;
    uint16_t res2 =num1 | num2 ;
    uint16_t res3 =num1 ^ num2 ;

    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",res);
    printf("%d\n",res2);
    printf("%d\n",res3);
    uint64_t num64 = 100;
    uint32_t num16= 100 ;
    int num =100 ;
    printf("%d \n",sizeof(num));
    printf("%d \n",sizeof(num1));
    printf("%d \n",sizeof(num16));
    printf("%d \n",sizeof(num64));
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int f=~num1;
    printf("\n%d   \n",f);




}
