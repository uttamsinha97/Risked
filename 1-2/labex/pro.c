#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bp;
    printf("enter the boiling point\n\n");
    scanf("%d",&bp);
    if(bp > 0.95*100 && bp <1.05*100)
        printf("substance entered is water\n\n");
    else if(bp > 0.95*357 && bp <1.05*357)
        printf("substance entered is mercury\n\n");
    else if(bp > 0.95*1187 && bp <1.05*1187)
        printf("substance entered is copper\n\n");
    else if(bp > 0.95*2193 && bp <1.05*2193)
        printf("substance entered is silver\n\n");
    else if(bp > 0.95*2660 && bp <1.05*2660)
        printf("substance entered is gold\n\n");
    else
        printf("suntance not in data base\n\n");
    return 0;
}
