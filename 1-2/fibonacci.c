#include<stdio.h>
#include<stdlib.h>
int fs(int n);
int main()
{
    int term,num,i;
    printf("how many no. in series:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        term=fs(i);
        printf("%d  ",term);
    }
    return 0;
}
int fs(int n)
{
    if (n==0||n==1)
    return n;
    else return(fs(n-1)+fs(n-2));
}
