#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter the first number\n");
    scanf("%d",&x);
    printf("enter the second number\n");
    scanf("%d",&y);
    printf("x=%d\ny=%d\n\n",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("x=%d\ny=%d\n\n",x,y);
    return 0;
}
