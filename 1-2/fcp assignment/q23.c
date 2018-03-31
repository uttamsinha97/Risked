#include <stdio.h>
//octal to binary

int main()
{
    char octal[1000];
    long int i=0;
    printf("enter an octal number\n");
    scanf("%s",&octal);
    printf("binary value = ");
    while(octal[i])
    {
        switch(octal[i])
        {
            case '0' : printf("000");break;
            case '1' : printf("001");break;
            case '2' : printf("010");break;
            case '3' : printf("011");break;
            case '4' : printf("100");break;
            case '5' : printf("101");break;
            case '6' : printf("110");break;
            case '7' : printf("111");break;
            default : printf("invalid octal digit %c ",octal[i]);
        }
        i++;
    }
    getch();
}
