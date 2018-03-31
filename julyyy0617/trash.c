#include<stdio.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node *NODE1;


NODE1 all()
{
    NODE1 n;
    n=(NODE1)malloc(sizeof(struct node));
    return n;
}

void del(NODE1 first)
{
    free(first);
}

NODE1 insertfirst(NODE1 first,int ele)
{
    NODE1 temp;
    temp=all();
    temp->data=ele;
    temp->next=first;

    return first;
}

NODE1 insertend(NODE1 first,int ele)
{
    NODE1 temp;
    temp=all();
    temp->data=ele;
    temp->next=NULL;
    if(first == NULL)
        return;

    NODE1 cur;
    cur=first;
    while(cur->next != NULL)
    {
        cur=cur->next;
    }

    cur->next=temp;

    return first;
}

void dis(NODE1 first)
{
    NODE1 temp;
    temp=first;

    while(temp!= NULL)
    {
        printf("%d   ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    NODE1 first =NULL;
    while(1)
    {
        printf("\n1insert front\n2insert end\n3display");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter")
            first=insertfirst(first,e)
        }
    }
}
