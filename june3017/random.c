#include<stdio.h>
int main()
{
    int i,z;
    for(i=1;i<100;i++)
    {
        z=rand();
        printf("%8d\n",z);
    }
    return 0;
}
