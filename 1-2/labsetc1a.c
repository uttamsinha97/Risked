#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
int main()
{
    int a[10],b[10],c[10],num1,num2;
    int i,j,notoccur,count;
    printf("\n enter the size of array A\n");
    scanf("%d",&num1);
    printf("\n enter the size of array B\n");
    scanf("%d",&num2);
    printf("\n enter the elements of array A\n");
    for(i=0;i<num1;i++)
        scanf("%d",&a[i]);
    printf("\n enter the elements of array \n");
    for(i=0;i<num2;i++)
        scanf("%d",&b[i]);

    /*copy those elements of x that are not in y*/
    for(i=0;i<num1;i++)
    {
        notoccur=TRUE;
        for(j=0;j<num2;j++)
        {
            if(a[i]==b[j])
            notoccur=FALSE;
        }
        if(notoccur==TRUE)
        c[count++]=a[i];
    }
printf("\n elements of array A:\n");
for(i=0;i<num1;i++)
    printf("%d\t",a[i]);
printf("\n elements of array B:\n");
for(i=0;i<num2;i++)
    printf("%d\t",b[i]);
printf("\n elements of array C:\n");
for(i=0;i<count;i++)
    printf("%d\t",c[i]);
printf("\n");
}
