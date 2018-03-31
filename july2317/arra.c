#include <stdio.h>

int main()
{
    int i,n,t,j;
    int arr[20];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
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
        printf("%d",arr[n-1]);
        printf("\n");
    }
    return 0;
}
