#include<stdio.h>
int main()
{
    float bp;
    printf("Enter the boiling point to know the name of the element:\n");
    scanf("%f",&bp);
    if(bp>=95&&bp<=105)
    printf("The boiling point entered is of WATER\n");
    else if(bp>=(0.95*357)&&bp<=(1.05*357))
    printf("The boiling point entered is of MERCURY\n");
    else if(bp>=(0.95*1187)&&bp<=(1.05*1187))
    printf("The boiling point entered is of COPPER\n");
    else if(bp>=(0.95*2193)&&bp<=(1.05*2193))
    printf("The boiling point entered is of SILVER\n");
    else if(bp>=(0.95*2660)&&bp<=(1.05*2660))
    printf("The boiling point entered is of GOLD\n");
    else
    printf("The choice does not match\n");
}
