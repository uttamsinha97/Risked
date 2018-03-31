#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ////int arr[20];
    int i,n;
    //printf("enter the size of array\n\n");
    //scanf("%i",&n);
    //for(i=1;i<=n;i++)
    //  scanf("%d",&arr[i]);

    int arr[]={1,8,3,9,5,7};

    printf("entered elements in array are \n\n");
    //for(i=1;i<=n;i++)
      //  printf("%4d",arr[i]);

    int k= sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+k);

    printf("entered elements in the SORTED array are \n\n");

    for(i=0;i<k;++i)
        printf("%4d",arr[i]);

    return 0;
}
