#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
} *start;
void add()
{
    int ch;
    //int value;
    do
    {
    struct node *newnode;
    struct node * current;
    int value;
    newnode= (struct node *) malloc(sizeof(struct node));
    printf("enter the value to be inserted\n\n",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        current=newnode;
    }
    else
    {
        current->next=newnode;
        current=newnode;
    }
     printf("nDo you want to creat another : ");
    ch=getche();
    }while(ch!='n');

}
void display()
{
    struct node * newnode;
    newnode=start;
    while(newnode!=NULL)
    {
        printf("%d  ",newnode->data);
        newnode=newnode->next;
    }
}
void display();
void add();
int main()
{
    add();
    display();

}
