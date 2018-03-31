#include <stdio.h>
//printing square pattern
int main()
{
    int r,c,i,j;
    printf("printing a square pattern\n kindly enter the same number of rows and column\n");

    printf("enter the number of rows and column\n\n");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                printf(" * ");
            }
            printf("\n\n");

        }
    }
    else
        abort();
}
