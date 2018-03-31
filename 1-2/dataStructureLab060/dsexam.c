#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("enter x\n");
    scanf("%i",&x);
    int test (int x)
    {
        if(x<5)
        {
            return(3*x);}

            else

            return (2*test(x+5)+7);
        }
}
