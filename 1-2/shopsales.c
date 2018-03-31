#include<stdio.h>
#include<stdlib.h>
#define salestax 8.5
int main()
{
   int quantity;
   float discrate,unitprice,subtotal,subtaxable,discamnt,total,taxamnt;
   printf("enter the quantity\n");
   scanf("%d",&quantity);
   printf("enter unit price\n");
   scanf("%f",&unitprice);
   printf("enter the disc rate\n");
   scanf("%f",&discrate);
   subtotal=quantity*unitprice;
   discamnt=(subtotal*discrate)/100;
   subtaxable=subtotal-discamnt;
   taxamnt=(subtaxable*salestax)/100;
   total=subtaxable+taxamnt;
   printf("-----------------------------------------\n");
   printf("quantity       :                    %d\n",quantity);
   printf("unit prince    :                 %8.2f\n",unitprice);
   printf("-----------------------------------------\n");
   printf("subtotal       :                 %8.2f\n",subtotal);
   printf("discount amount:                -%8.2f\n",discamnt);
   printf("subtaxable     :                 %8.2f\n",subtaxable);
   printf("tax amount     :                +%8.2f\n",taxamnt);
   printf("total          :                 %8.2f\n",total);
   printf("-----------------------------------------");
}
