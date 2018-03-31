#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,hcf;
    int d=1; //while loop chalane ke iye hai
    printf("enter the two numbers whose hcf is needed\n");
    scanf("%d%d",&a,&b);
    c=a<b?a:b; //dekho POOJA ternary operator se smaller of two number nikal rahe
    while(d)
    {
        if(a%c==0 && b%c==0)//smaller se divide kiya jaata hai
            break;          //zero aa gaya then hcf mil gaya
        else
            c--;
    }
    hcf=c;
    printf("hcf is %d \n",hcf);
    return 0;
}
