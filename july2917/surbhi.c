#include<stdio.h>
int main()
{
    int i;
    char n;

    for(i=1;i<=70;i++)
        printf("%d    %c\n",i,i);
    printf("enter any value\n");
    scanf("%c",&n);
    printf("corresponding ascii is %d\n",n);

    return 0;
}
