#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=printf("hello natasha");
    printf("%i",a);
    printf("%d",a);
    int i,j,k,c;
    int arr[10];
    for(i=1;i<=10;i++)
    {
        for(j=1;j<40;j++)
        {
            c=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                    c=c+1;
            }
            if(c==2)
                arr[i]=j;
        }
    }
    for(i=1;i<=10;i++)
    {
        printf("%i ",arr[i]);
    }
}
