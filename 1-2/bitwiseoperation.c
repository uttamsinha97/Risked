#include<stdio.h>
#include<stdlib.h>
unsigned short fnsetbit(unsigned short,unsigned short);
unsigned short fnmaskbit(unsigned short,unsigned short);
int main()
{
    unsigned short num,pos;//local declaration
    printf("\nenter a value\n");//raeding values
    scanf("%hu",&num);//scaning valuess
    printf("\nenter bit uposition (1-16) to set to one\n");
    scanf("%hu",&pos);
    num=fnsetbit(num,pos);
    printf("\nvalue after setting the specified bit=%hu\n",num);
    printf("\nenter a value\n");
    scanf("%hu",&num);
    printf("\nenter bit uposition (1-16) to mask to zero\n");
    scanf("%hu",&pos);
    num=fnmaskbit(num,pos);
    printf("\nvalue after masking the specified bit=%hu\n",num);
    return 0;
}
unsigned short fnsetbit(unsigned short val,unsigned short pos)
{
    unsigned short mask=1;
    mask=mask<<(pos-1);
    val=val|mask;
    return val;
}
unsigned short fnmaskbit(unsigned short val,unsigned short pos)
{
    unsigned short mask=1;
    mask=mask<<(pos-1);
    mask=~mask;
    val=val&mask;
    return val;

}
