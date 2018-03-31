#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arr[5][20];
    int arru[5];
    printf("enter the names\n\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n\n",arr[i]);
    }
    printf("enter the USN of the students \n\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",arru[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n\n",arru[i]);
    }


}
