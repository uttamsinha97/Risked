#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int k=-4;
    for(i=0;i<4;i++)
    {
        if(i%2==0)
        {
            k=k+5;
            for(j=1;j<=5;j++)
                printf("%d",k);
            k++;
        }
        else
        {
            k=k+5;
            for(j=1;j<=5;j++)
                printf("%d",k);
            k--;
        }
    }
}
