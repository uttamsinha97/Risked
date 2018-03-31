#include<stdlib.h>
int main()
{
    int num,temp,last,mul=0; // emtering the required values
    printf("enter a number to check arm strong\n");
    scanf("%d",&num);
    temp=num;
    printf("entered number is %d\n\n",temp);
    while(temp!=0)
    {
        last=temp%10;
        mul=mul+ (last*last*last);
        last=last/10;
    }
    if(mul==num)
        printf("arm is strong\n");
    else
        printf("not\n\n");
    return 0;
}
