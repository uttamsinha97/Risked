#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    int y=10;
    printf("%d  %d",x,y);
    printf("\n\nafter swapping\n\n");
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d  %d",x,y);
    return 0;
}
