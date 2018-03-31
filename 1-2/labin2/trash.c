#include <stdio.h>
#include <stdlib.h>
void fncal(int,int,int,int*,int*);


int main()
{
    int l,b,h,surface,volume;
    printf("enter the lenth ,breadth and height of the cuboid\n\n");
    scanf("%i%i%i",&l,&b,&h);
    fncal(l,b,h,&surface,&volume);
    printf("surface areas is \n\n",surface);
    printf("voulume is \n\n",volume);
    return 0;
}
void fncal(int l,int b,int h, int*sa,int*vol)
{
    *sa=2*(l*b + b*h + h*l);
    *vol=l*b*h;
}
