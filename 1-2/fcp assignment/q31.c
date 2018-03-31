#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char hex[17];//hexaadecimal value to decimal
    long long decimal,place;
    int i=0,val,len;
    decimal=0;
    place=1;
    printf("enter any hexadecimal number \n");
    gets(hex);
    len=strlen(hex);
    len--;
    for(i=0;hex[i]!='\0';i++)
    {
        switch(hex[i])
        {
            case '0' : val=0; break;
            case '1' : val=1; break;
            case '2' : val=2; break;
            case '3' : val=3; break;
            case '4' : val=4; break;
            case '5' : val=5; break;
            case '6' : val=6; break;
            case '7' : val=7; break;
            case '8' : val=8; break;
            case '9' : val=9; break;
            case 'A' : val=10; break;
            case 'B' : val=11; break;
            case 'C' : val=12; break;
            case 'D' : val=13; break;
            case 'E' : val=14; break;
            case 'F' : val=15; break;
            case 'a' : val=10; break;
            case 'b' : val=11; break;
            case 'c' : val=12; break;
            case 'd' : val=13; break;
            case 'e' : val=14; break;
            case 'f' : val=15; break;

        }
        decimal+=val*(pow(16,len));
        len--;
    }
    printf("hexadecimal number  %s\n",hex);
    printf("decimal number  %lld \n",decimal);
    return 0;
//valid output
//hexaddecimal to decimal

}
