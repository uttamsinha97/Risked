#include<stdio.h>
int main()
{
    int num1;
    int num2;
    printf("enter two numbers\n\n");
    scanf("%d%d",&num1,&num2);
    printf("entered numbers are %d     %d\n\n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("swapped numbers are %d     %d\n\n",num1,num2);
    return 0;
}
