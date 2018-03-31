
/*program to generate n random numbers and sort them using selection sort
and insertion sort usinf user defined functions*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fngenrandinput(int [],int);
void fndisparray(int [],int);
void fninsertionsort(int [],int);
void fnselectionsort(int [],int);

int main()
{
    int arr[100],num;
    printf("\ninsertion sort\n");
    printf("enter the size of the array");
    scanf("%d",&num);

    fngenrandinput(arr,num);
    printf("\nunsorted array\n");

    fndisparray(arr,num);

    fninsertionsort(arr,num);
    printf("\nsorted array:\n");
    fndisparray(arr,num);

    printf("\nselection sort\n");
    printf("\n enter the size of array\n");
    scanf("%d",&num);

    fngenrandinput(arr,num);
    printf("\n unsorted array elements are \n");
    fndisparray(arr,num);

    fnselectionsort(arr,num+1);

    printf("\nsorted array\n");
    fndisparray(arr,num+1);
    return 0;
}


void fnselectionsort(int a[],int n)
{
    int i,j,minpos,temp;
    for(i=1;i<n;i++)
    {
        minpos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minpos])
            minpos=j;
        }
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}

void fninsertionsort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void fngenrandinput(int x[],int n)
{
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++)
    x[i]=rand()%1000;
}

void fndisparray(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%4d",x[i]);
}
