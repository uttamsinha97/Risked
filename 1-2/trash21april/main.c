#include <stdio.h>
#include <stdlib.h>
void myFunc(int,int,int,int*,int*);

int main()
{
    int l,b,h,surface,volume;
    printf("enter the length,breadth and height\n\n");
    scanf("%d%d%d",&l,&b,&h);
    myFunc(l,b,h,&surface,&volume);
    printf("surface area is %d\n\n",surface);
    printf("volume is %d \n\n",volume);
    return 0;
}
void myFunc(int l,int b,int h,int*sa,int*v)
{
    *sa=2*(l*b + b*h + h*l);
    *v=l*b*h;
}
