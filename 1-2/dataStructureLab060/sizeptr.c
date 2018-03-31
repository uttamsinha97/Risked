#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    double a;
    char summ[10];
}stud;
int main()
{
    stud ss;
    //int *ptr;
    //float a;
    //*ptr=&a;
    printf("size is %d\n\n",sizeof(ss));
    return 0;
}
