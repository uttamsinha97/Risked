#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *p;

    append(&p,10);

    return 0;
}
void append (struct node **q, int data)
{
    struct node *temp,r;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    while(temp->link != NULL)
    {
        te
    }

}
