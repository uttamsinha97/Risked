#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows or column in n*n chessboard\n\n");
    scanf("%d",&n);
    long long int z = n*(n+1)*(2*n+1)/6;
    printf("\n\nsize of long long int %d\n\n",sizeof(z));
    printf("\n \nnumber of squares %lld \n\n",z);
    return 0;
}
