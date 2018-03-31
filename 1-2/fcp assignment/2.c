#include <stdio.h>

int main()
{
   int num,i,j;
   printf("please enter a number to see hollow square formation\n\n");
   scanf("%d",&num);
   for(i=0;i<num;i++)
   {
       for(j=0;j<num;j++)
       {
           if(i==0 || i==num-1)
           {
               printf("*");
           }
           else if(j==0 || j==num-1)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }
   return 0;

}
