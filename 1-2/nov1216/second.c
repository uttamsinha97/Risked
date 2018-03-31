#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10

int main()
{
    int arr[MAX];
    int i,front,rear;

    front=rear=-1;

    for(i=0;i<MAX;i++)
        arr[i]=0;

    addq(arr,1,&front,&rear);
    addq(arr,2,&front,&rear);
    addq(arr,3,&front,&rear);
    addq(arr,4,&front,&rear);
    addq(arr,5,&front,&rear);

    printf("elements in the circular queue are\n");
    display(arr);

    i=delq(arr,&front,&rear);
    if(i!=NULL)
        printf("item deleted is %i\n",i);

}
