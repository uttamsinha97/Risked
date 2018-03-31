#include <stdio.h>
#include <stdint.h>
int main()
{
    uint16_t a = 10;
    uint32_t b = 20;
    int c = 30;
    uint64_t d =40 ;
    uint8_t e = 100 ;

    printf("%d\n\n",a);
    printf("%d\n\n",b);
    printf("%d\n\n",c);
    printf("%d\n\n",d);
    printf("%d\n\n",e);

    printf("%d\n\n",sizeof(a));
    printf("%d\n\n",sizeof(b));
    printf("%d\n\n",sizeof(c));
    printf("%d\n\n",sizeof(d));
    printf("%d\n\n",sizeof(e));

    return 0;

}
