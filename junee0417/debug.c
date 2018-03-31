#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node * NODE1;
NODE1 allocatenode()
{
    NODE1 n;
    n=(NODE1)malloc(sizeof(struct node));
    return n;
}

void freenode(NODE1 first)
{
    free(first);
}

NODE1 insertlast(NODE1 first,int data)
{
    NODE1 cur;
    NODE1 temp;
    cur=allocatenode();
    cur->data=data;
    cur->next=NULL;
    if(first==NULL)
    {
        return cur;
    }
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=cur;
    return first;
}
NODE1 deletefirst(NODE1 first)
{
    NODE1 temp;
    temp=first;
    first=first->next;
    printf("element deleted is %d",temp->data);
    freenode(temp);
    return first;

}
void display(NODE1 first)
{
    NODE1 temp;
    temp=first;
    while(temp!= NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    NODE1 first=NULL;
    int choice;
    int ele;
    while(1)
    {
    printf("\n\n1insert\n2delete\n3display\n4exit\n\n");
    printf("enter choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nenter the element to be inserted\n\n");
            scanf("%d",&ele);
            first=insertlast(first,ele);
            break;
        case 2:
            first=deletefirst(first);
            break;
        case 3:
            display(first);
            break;
        case 4:
            exit(0);
            break;
    }
    }
    return 0;
}
