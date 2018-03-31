#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int disc(int a,int b,int c);
int main()
{
    int a,b,c,x,y,z;

    printf("enter the value of a b and c\n\n");
   scanf("%d%d%d",&a,&b,&c);
   x=disc(a,b,c);
   y=sqrt(x);
   z=x==0?1:(x>0?2:3);
   switch (z)
   {
       case 1 :
        printf("\n\nroots are real and equal \n\n");
        printf("roots are %d %d\n\n",b/4*a,b/4*a);
       break;
       case 2 :
       printf("\n\nroots are real and distinct\n\n");
       printf("%d",(-b+y)/4*a);
       printf("%d",(-b-y)/4*a);
       break;
       case 3:
       printf("\n\nroots are imaginary\n\n");
       break;
   }


}
int disc(int a,int b,int c)
{
    return (b*b-4*a*c);
}
