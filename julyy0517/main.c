#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;

};

typedef struct node * NODEPTR;

void swap(NODEPTR a, NODEPTR b);

NODEPTR all()
{
    NODEPTR n;
    n=(NODEPTR)malloc(sizeof(struct node));
    return n;
}
void del(NODEPTR first)
{
    free(first);
}

NODEPTR ins(NODEPTR first,int ele)
{
    NODEPTR temp;
    temp=all();
    temp->data=ele;
    temp->next=NULL;
    if( first == NULL)
        return temp;

    NODEPTR cur;
    cur=first;

    while(cur->next != NULL)
    {
        cur=cur->next;
    }

    cur->next=temp;

    return first;
}

NODEPTR rem(NODEPTR first)
{
    NODEPTR temp;
    temp=first;

    while(temp->next->next != NULL)
    {
        temp=temp->next;
    }

    printf("\nelement deleted is %d\n\n",temp->next->data);

    del(temp->next);
    temp->next =NULL;

    return first;
}

void dis(NODEPTR first)
{
    NODEPTR temp;
    temp=first;
    int c=0;

    while(temp != NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
        c=c+1;
    }
    del(temp);
}

void sorts(NODEPTR first)
{
    int swapped ;
    NODEPTR ptr1;
    NODEPTR lptr=NULL;
    if(ptr1 == NULL)
        return ;
    do
    {
        swapped=0;
        ptr1=first;
        while(ptr1->next != lptr)
        {
            if(ptr1->data > ptr1->next->data)
            {
                swap(ptr1,ptr1->next);
                swapped=1;
            }
            ptr1=ptr1->next;
        }
        lptr=ptr1;
    }
    while(swapped);
}

void swap(NODEPTR a, NODEPTR b)
{
    int temp=a->data;
    a->data=b->data;
    b->data=temp;
}

int main()
{
    NODEPTR first = NULL;
    int choice, element;
    while(1)
    {
        printf("\n1push\n2pop\n3display\n4sort\n5exit\n\n");
        printf("enter your choice\n\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("enter the element to insert\n\n");
            scanf("%d",&element);
            first=ins(first,element);
            break;

        case 2:
            first=rem(first);
            break;

        case 3:
            dis(first);
            break;

        case 4 :
            printf("elements sorted \nenter 3 to display the sorted stack\n");
            sorts(first);
            break;

        case 5:
            exit(1);
        }
    }
    return 0 ;
}
