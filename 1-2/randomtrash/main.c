#include <stdio.h>
#include <stdlib.h>
int fiboo(int n);

int main()
{
    int i,j,k=0;
    int r,c,m,n,l,term;
    printf("enter the no of rows\n");
    scanf("%d",&r);
    printf("enter the no of column\n");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(m=1;m<=i;m++)
        {
             for(j=1;j<=c;j++)
            {
                printf("%4i ",i);
            }
            printf("\n");
        }


    }
    printf("\n\n\nstarting something new\n");
    printf("enter the number you want to  see in yer fibonacci \n");
    scanf("%d",&n);
    printf("yer fibonnnaci series is here\n");
    for(l=0;l<100;l++)
    {

        term=fiboo(l);
        if(term<=n)
        printf("%3i",term);
    }

    return 0;

}
int fiboo(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return fiboo(n-1)+fiboo(n-2);
}
