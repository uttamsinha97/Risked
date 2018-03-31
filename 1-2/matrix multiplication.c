#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],col1,col2,row1,row2,i,j,k;
    int prod[10][10]={0};
    printf("Enter the row and and column of Matrix A:\n");
    scanf("%d%d",&row1,&col1);
    printf("Enter the elements of Matrix A:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Displaying the elements of Matrix A:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
          printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Enter the row and and column of Matrix B:\n");
    scanf("%d%d",&row2,&col2);
    printf("Enter the elements of Matrix B:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        scanf("%d",&b[i][j]);
    }
    printf("Display the elements of Matrix B:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
          printf("%d\t",b[i][j]);
        printf("\n");
    }
    if(col1!=row2)
    {
        printf("Matrix multiplication not possible\n\n");
        exit(0);

    }
    else
    {
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                for(k=0;k<col1;k++)
                {
                     prod[i][j] +=a[i][k]*b[k][j];
                }
            }
        }
    }
    printf("Display the elements of Matrix product:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
          printf("%d\t",prod[i][j]);
        printf("\n");
    }
    int trace=0;
    if(row1==col2)
    {
         for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            if(i==j)
            trace=trace+prod[i][j];
        }


    }
    printf("\n\ntrace of product matrix is %d\n",trace);

}
}
