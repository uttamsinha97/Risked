#include <stdio.h>
#include <bits/bits/stdc++.h>
int main()
{
    int arr[20];
    int i,n;
    printf("enter the size of array\n\n");
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);

    printf("entered elements in array are \n\n");
    for(i=1;i<=n;i++)
        printf("%4d",arr[i]);

    return 0;
}
