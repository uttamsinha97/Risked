#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 3

int arrstk[STACKSIZE];
int *ptr;

int main()
{
    int data;
    int *ptr;
    printf("enter the integer number to enter\n\n");
    scanf("%d",&data);
    if(*ptr=STACKSIZE-1)
    {
        printf("stack will overflow\n\n");
        return 101;
    }
    *ptr=*ptr+1;
    arrstk[*ptr]=data;

    printf("data entered is %d \n\n",arrstk[*ptr]);
    return 0;


}
