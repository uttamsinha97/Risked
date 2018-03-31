#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void append (struct node **, int);
void display(struct node *);
int main()
{
    struct node *p;
    printf("the contents of the list are\n\n");
    append(&p,10);
    display(p);
    append(&p,20);
    display(p);
    append(&p,30);
    display(p);
    append(&p,40);
    display(p);
    append(&p,50);
    display(p);
    append(&p,60);
    display(p);
    return 0;
}

void append (struct node **q, int num)
{
    struct node *temp, *r;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    temp->link=NULL;
    *q=temp;
    while(temp->link != NULL)
    {
        temp=temp->link;
    }
    r=(struct node*)malloc(sizeof(struct node));
    r->data=num;
    r->link=NULL;
    temp=r;
}
void display(struct node *q)
{
    while(q != NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    return 3;
}
