#include <stdio.h>
#include <stdlib.h>

int readNum(int num);
int firstThree(int num);
int lastThree(int num);
int displayFancy(int num);

int main()
{
    int n,y,z,a,num;
    n=readNum(num);
    y=firstThree(n);
    z=lastThree(n);
    a= displayFancy(n);
    printf("\n \nfirst three digit of yer number is %d \n",y);
    printf("\n \n last three digit of yer number is %d \n",z);

}
int readNum(int num)
{
    printf("enter a six digit integer \n\n");
    scanf("%6d",&num);
    return num;
}
int firstThree(int num)
{
    int y;
    y=(num/1000);
    return y;
}

int lastThree(int num)
{
    int z;
    z=(num%1000);
    return z;
}
int displayFancy(int num)
{
    int a,b,c,d,e,f;
    a=num%10;
    b=(num%100)/10;
    c=(num%1000)/100;
    d=(num%10000)/1000;
    e=(num%100000)/10000;
    f=num/100000;
    printf("number with comma between them \n ");
    printf("%d,%d,%d,%d,%d,%d",f,e,d,c,b,a);
    return 0;
}
