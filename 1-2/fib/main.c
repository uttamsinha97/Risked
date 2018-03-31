#include <stdio.h>
#include <stdlib.h>
int fib(int n);

int main()
{
    int i,term,num,keynumber;
    printf("enter the number of terms you want to see in yer fibonacci series\n");
    scanf("%d",&num);
    printf("enter the number till you want to see the fiboncai  number\n\n");
    scanf("%d",&keynumber);
    printf("yer fibonnaci series\n");
    for(i=0;i<num;i++)
    {
        term=fib(i);
        if (term<=keynumber)
        printf("%d ",term);
    }

    return 0;
}
  int fib(int n)
    {
        if(n==0 || n==1)
            return n;
        else
            return
            fib(n-1)+fib(n-2);
    }
    //this is the program to print the fibonacci series upto n terms
