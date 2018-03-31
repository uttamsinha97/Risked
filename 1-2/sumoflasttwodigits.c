#include<stdio.h>
int unit(int a);
int tens(int b);
int sum(int a,int b);
int main()
{
    int num,u,t,s;
    printf("\n\n");
    printf("\tEnter an integer no. : ");
    scanf("%d",&num);
    u=unit(num);
    t=tens(num);
    s=sum(u,t);
    printf("\tThe last digit of no. %d is :                        %d       \n",num,u);
    printf("\tThe second last digit of no. %d is :                 %d\n",num,t);
    printf("\tThe sum of last and second last digit of no. %d is:  %d",num,s);
    printf("\n\n");
}
int unit(int a)
{
    return(a%10);
}
int tens(int b)
{
    return((b%100)/10);
}
int sum(int a,int b)
{
    return(a+b);
}
