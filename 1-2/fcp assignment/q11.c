#include <stdio.h>
#include <stdlib.h>
//PROGRAM TO CHECK WHETHER THE NUMBER IS A PEREFCT NUMBER OR NOT
int main()
{
    int num,temp,i,r,f,sum=0;
    printf("enter the number to check whether it is strong number\n\n");
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        i=1,f=1;
        r=num%10;
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        sum=sum+f;
        num=num/10;
    }
    if(sum==temp)
        printf("strong number\n\n");
    else
        printf("not a strong number\n");
    return 0;
}
