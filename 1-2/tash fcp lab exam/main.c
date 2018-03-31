#include <stdio.h>
#include <stdlib.h>
int last(int num);
int seclast(int num);
int addtwo();

int main()
{
    int num,l,m,n;
    printf("enter an integer number\n\n");
    scanf("%i",&num);
    l=last(num);
    m=seclast(num);
    n=addtwo(l+m);
    printf("sum %i\n\n\n",n);
    return 0;

}
int last(int num)
{
    return(num%10);
}
int seclast(int nume)
{
    return((nume/10)%10);
}
int addtwo(num,nume)
{
    //int l,m;
    return (num+nume);
}
