#include <stdio.h>

#define MAX 10

int main()
{
    int arr[MAX];
    int i,front,rear;

    front=rear=-1;

    for(i=1;i<MAX;i++)
        arr[i]=0;

    addq(arr,1,&front,&rear);
    addq(arr,2,&front,&rear);
    addq(arr,3,&front,&rear);
    addq(arr,4,&front,&rear);
    addq(arr,5,&front,&rear);
    addq(arr,6,&front,&rear);

    printf("elements in the circular queue are\n\n");
    display(arr);

    i=del(arr,&front,&rear);printf("element deleted from the queue is %d\n",i);
    i=del(arr,&front,&rear);printf("element deleted from the queue is %d\n",i);
    i=del(arr,&front,&rear);printf("element deleted from the queue is %d\n",i);
    i=del(arr,&front,&rear);printf("element deleted from the queue is %d\n",i);

    printf("elements in the circular queue after deletion\n\n");
    display(arr);

    addq(arr,11,&front,&rear);
    addq(arr,22,&front,&rear);
    addq(arr,33,&front,&rear);
    addq(arr,44,&front,&rear);
    addq(arr,55,&front,&rear);

    printf("elements in the circular queue after addition are\n");
    display(arr);

    addq(arr,111,&front,&rear);
    printf("elements in the circular queue after addition\n");
    display(arr);
    return 0;
}

void addq(int *arr,int item,int *pfront,int *qfront)
{
    if((*prear==MAX-1 && *pfront==0) || (*prear+1==*pfront))
    {
        printf("queue is full\n\n");
        return;
    }
    if(*prear==MAX-1)
        *prear=0;
    else
        (*prear)++;
    arr[*prear]=item;
    if(*pfront=-1)
        *pfront=0;
}

int delq(int *arr,int *pfront,int *prear)
{
    int data;
    if(*pfront==-1)
    {
        printf("queue is empty\n\n");
        return NULL;
    }
    data=arr[*pfront];
    arr[*pfront]=0;

    if(*pfront==*prear)
    {
        *pfront=-1;
        *prear=-1;
    }
    else
    {
        if(*pfront==MAX-1)
            *pfront=0;
        else
            (*pfront)++;
    }
    return data;
}
void display(int arr)
{
    int i;

}
