#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,i,c;
    printf("enter the number whose table is to be printed \n \n ");
    scanf("%d",&a);
    for(i=1,i<11,i=i+1)
        c=a*i;
        printf("%d",c);
}
