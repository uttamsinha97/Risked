#include<stdio.h>
#include<stdlib.h>
int main()
{
    int list[100],num,i,j,small,large,temp,pos;//local declaration
    int *ptr1,*ptr2;
    ptr1=ptr2=list;
    printf("Enter the valuue of n:");//taking values
    scanf("%d",&num);//reading values
    printf("Enter the Elements:");
    for(i=0;i<num;i++)//loops , iteration
    {
        scanf("%d",&list[i]);
    }
    small=*ptr1;
    large=*ptr2;
    for(i=1;i<num;i++)
    {
        if(list[i]<small)
        {
            small=list[i];
            ptr1=&list[i];
        }
        if(list[i]>large)
        {
            large=list[i];
            ptr2=&list[i];
        }

    }
    printf("\nArray elements before swapping the largest and smallest elements\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",list[i]);
    }
    printf("Smmalest Element=%d\n",*ptr1);
    printf("largest Element=%d\n",*ptr2);//displaying
    temp=*ptr1;//swapping
    *ptr1=*ptr2;//swappping
    *ptr2=temp;//swappping
     printf("\nArray elements after swapping the largest and smallest elements\n");
     for(i=0;i<num;i++)
    {
        printf("%d\t",list[i]);
    }

}
