#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100],n,c,d,position,swap;
    printf("enter number of eleemnts\n\n");
    scanf("%d",&n);
    printf("enter %d integers \n\n",n);
    for(c=0;c<n;c++)
        scanf("%d",&array[c]);
    for(c=0;c<(n-1);c++)
    {
        position=c;
        for(d=c+1;d<n;d++)
        {
            if (array[position]>array[d])
                position=d;
        }
        if(position != c)
        {
            swap=array[c];
            array[c]=array[position];
            array[position]=swap;
        }
    }
    printf("sorted list in ascending order\n\n");
    for(c=0;c<n;c++)
        printf("%d  ",array[c]);
    return 0;
}
