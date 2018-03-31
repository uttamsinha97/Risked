#include <stdio.h>
#include <stdlib.h>
void funvol(int,int,int,int*,int*);

int main()
{
    int l,b,h,surface,volume;
    printf("enter the length breadth and height of cuboid\n");
    scanf("%i%i%i",&l,&b,&h);
    funvol(l,b,h,&surface,&volume);
    printf("surface area of the cuboid is %d\n\n",surface);
    printf("volume of cuboid is %d\n\n",volume);
    return 0;

}
void funvol(int l,int b,int h,int *s,int *v)
{
    *s=2*(l*b + b*h + h*l);
    *v=l*b*h;
}
