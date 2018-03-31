
#include<stdio.h>
#include<stdlib.h>
void binarysearch(int key,int num);
void readarray(int n);
void bubsort(int num);
int arr[100];
int main()
{
    int key,num,i,j;
    printf("enter the size of array");
    scanf("%d",&num);
    readarray(num);
    bubsort(num);
    printf("enter the key element\n");
    scanf("%d",&key);
    binarysearch(key,num);
    return 0;
}

void readarray(int n)
{
    int i;
    printf("\nenter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void bubsort(int num)
{
    int temp,i,j;
    for(i=0;i<num;i++)
    {
        for(j=num-1;j>i;j--)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    printf("\n sorted elements are \n");
    for(i=0;i<num;i++)
    printf("%d ",arr[i]);
}

void binarysearch(int key,int num)
{
int low,high,mid,flag;
low=0,flag=0;
high=num-1;
while(low<=high)
{
    mid=(low+high)/2;
    if(arr[mid]==key)
    {
        printf("element %d found at position %d",key,mid+1);
        exit(0);
    }
    else if(key<arr[mid])
    high=mid-1;
    else
    low=mid+1;
}

printf("\nelement not found\n");
return;

}

/*#include<stdio.h>
#include<stdlib.h>

void read(int num);
void binary(int num);
//void display(int num);
int arr[100];
int main()
{
    int num,i,j;
    printf("enter the size of the array\n\n");
    scanf("%d",&num);
    read(num);
    binary(num);
    //display(num);
    return 0;
}
void read(int num)
{
    int i;
    printf("enter the values in arary\n\n");
    for(i=1;i<=num;i++)
        scanf("%d",&arr[i]);
}
void binary(int num)
{
    int i,j,temp;
    for(i=0;i<num;i++)
    {
        for(j=num-1;j>i;j--)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;

            }
        }
    }
        for(i=1;i<=num;i++)
    printf("%d  ",arr[i]);
}
/*void display(int num)
{
    int i;
    for(i=1;i<=num;i++)
    printf("%d  ",arr[i]);
}
*/
