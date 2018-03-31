#include<stdio.h>
int main()
{
    int i,j,t,n,t1;
    int arr[20];
    scanf("%d",&t1);
    for(i=1;i<=t1;i++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=(n-i);j++)
            {
                if(arr[j]>arr[j+1])
                {
                    t=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=t;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
