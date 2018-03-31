#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q,i,j,k;
    printf("enter the size of array A :\n");
    scanf("%d %d",&m,&n);
    printf("enter the size of array B:\n");
    scanf("%d %d",&p,&q);
    printf("enter the elements of array A\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the elements of array B\n");
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("The elements of array A\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("The elements of array B:\n");
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=q;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    printf("multiplication of A and B \n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=q;j++)
        {
            c[i][j]=0;
            for(k=1;k<=m;k++)
            {
                c[i][j]=c[i][j]+ a[i][k]*b[k][j];
            }
        }
    }
        for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
 return 0;

}
