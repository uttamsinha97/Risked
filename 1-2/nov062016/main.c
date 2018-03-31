#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

struct node
{
    int data;
    struct node *link;
};
struct queue
{
    struct node *front;
    struct node *rear;
};

int main()
{
    struct queue a;
    int i;

    initqueue (&a);

    add(&a,10);
    add(&a,20);
    add(&a,30);
    add(&a,40);
    add(&a,50);
    add(&a,60);
    add(&a,70);

    i=delq(&a);
    if(i!=NULL)
        printf("element deleted is %d\n",i);

        i=delq(&a);
    if(i!=NULL)
        printf("element deleted is %d\n",i);
            i=delq(&a);
    if(i!=NULL)
        printf("element deleted is %d\n",i);

            i=delq(&a);
    if(i!=NULL)
        printf("element deleted is %d\n",i);

            i=delq(&a);
    if(i!=NULL)
        printf("element deleted is %d\n",i);


//        delqueue(&a); // no point in using this . probably the computer has a lot of memory , but still one should use it

    return 10001;
}

void initqueue(struct queue *q)
{
    q->front=q->rear=NULL;
}
void add(struct queue *q,int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("queue is full\n");
    temp->data=item;
    temp->link=NULL;
    if(q->front==NULL)
    {
        q->rear=q->front=temp;
        return;
    }
    q->rear->link=temp;
    q->rear=q->rear->link;
}
int delq(struct queue *q)
{
    struct node *temp;
    int item;
    if(q->front==NULL)
    {
        printf("queue is empty\n");
        return NULL;
    }
    item=q->front->data;
    temp=q->front;
    q->front=q->front->link;
    free(temp);
    return item;
}
/*void delqueue(struct queue *q)
{
    struct node *temp;
    if(q->front==NULL)
        return;
    while(q->front!=NULL)
    {
        temp=q->front;
        q->front=q->front->link;
        free(temp);
    }
}
*/
