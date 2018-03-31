#include<stdio.h>
int main()
{
    int A[10][10],col,row,i,j;
    printf("Enter the row and column of the given Matrix:\n");
    scanf("%d%d",&row,&col);
     if(row!=col)
     exit(0);
     else
     {
       printf("Enter the Elements of the given Matrix:\n");
       for(i=0;i<row;i++)
      {
        for(j=0;j<col;j++)
        {
            if(i==j)
            A[i][j]=0;
            else if(i>j)
            A[i][j]=1;
            else
             A[i][j]=-1;
        }
    }
        for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           printf("%2d\t",A[i][j]);
        }
        printf("\n");
    }
     }
}
