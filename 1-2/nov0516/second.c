#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include <windows.h>

struct node
{
    int data;
    struct node *link;
};
 int main()
 {
     struct node *p;
     p=NULL;

     addatbeg(&p,10);
     addatbeg(&p,20);
     addatbeg(&p,30); // use at the at beginning function
     addatbeg(&p,40);
     addatbeg(&p,50);
     addatbeg(&p,60);

     display(p);
        reverse(&p);
     display(p); // displaying the singly linked lost after reversing it

     return 0;
 }
 void addatbeg( struct node **q ,int num)
 {
     struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node));
     temp->data=num;
     temp->link=*q;
     *q=temp;
}
void display(struct node *q)
{
    while(q!=NULL)
    {
        printf("%i  ",q->data);
        q=q->link;
    }
        printf("\n");
}
void reverse(struct node **x)
{
    struct node *q,*r,*s;
    q=*x;
    r=NULL;
    while(q!=NULL)
    {
        s=r;
        r=q;
        q=q->link;
        r->link=s;
    }
    *x=r;
}
