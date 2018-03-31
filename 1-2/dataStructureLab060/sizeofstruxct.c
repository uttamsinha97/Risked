#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char a[10];
    int n;
    } STUCTUREE;
int main()
{
    STUCTUREE s;
    printf("%i\n\n",sizeof(char));
    printf("%i\n\n",sizeof(int));
    printf("\nthe size is %i  \n\n",sizeof(STUCTUREE));
    return 100;

}
