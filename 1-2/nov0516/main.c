#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include <windows.h>
//void append(struct node **,int);
//void display(struct node);
struct node
{
    int data;
    struct node *link;
};
int main() // start of the main program
{
    struct node *p;
    p=NULL;
    append(&p,10);
    append(&p,20);
    append(&p,30);
    append(&p,40);
    append(&p,100);
    display(p);
    return 0;
}
void append(struct node **q, int num)
{
    struct node *temp,*r;
    if(*q==NULL)
    {
        temp=(struct node *) malloc(sizeof(struct node));
        temp->data=num;
        temp->link=NULL;
        *q=temp;
    }
    else
    {
        temp=*q;
        while(temp->link != NULL)
        {
            temp=temp->link;
        }
        r=(struct node *) malloc( sizeof(struct node));
        r->data=num;
        r->link=NULL;
        temp->link=r;
    }
}
void display(struct node *q)
{
    while(q != NULL)
    {
        printf("%i  ",q->data);
        q=q->link;
    }
    printf("\n");
}

