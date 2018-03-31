#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n1,n2,j,c=0;
    int arro[25];
    int arrt[25];
    printf("enter size of array one\n\n");
    scanf("%d",&n1);
    printf("enter the size of array two\n\n");
    scanf("%d",&n2);
    printf("enter elements in array one\n\n");
    for(i=1;i<=n1;i++)
        scanf("%d",&arro[i]);
    printf("enter elements in array two\n\n");
    for(i=1;i<=n2;i++)
        scanf("%d",&arrt[i]);
    printf("elements in array one\n\n");
    for(i=1;i<=n1;i++)
        printf("%d  ",arro[i]);
    printf("\n\nelements in array two\n\n");
    for(i=1;i<=n2;i++)
        printf("%d  ",arrt[i]);

    for(i=1;i<=n1;i++)
    {
        for(j=i;j<=n2;j++)
        {
            if(arro[i]!=arrt[j])
            c++;

        if(c==1)
        {

            printf("%d  ",arro[i]);
            c=0;
        }
    }
}}
