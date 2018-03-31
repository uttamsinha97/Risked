#include <stdio.h>
#include <stdlib.h>
struct node
{
    int a,n;
    struct node *next;
};
typedef struct node NODE;
NODE *insertend(NODE *start,int a,int n)
{
    NODE *newnode,*temp;
    newnode=(NODE *)malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("memory alocation error\n");
        return start;
    }
    newnode->a=a;
    newnode->n=n;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    temp=start;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;
    return start;
}
NODE *addpoly(NODE *p,NODE *q,int pd,int qd)
{
    int a,n;
    NODE *z=NULL;
    NODE *tp=p,*tq=q;
    if(pd==qd)
    {
        while(pd>=0)
        {
            a=tp->a+tq->a;
            n=tp->n;
            z=insertend(z,a,n);
            tp=tp->next;
            tq=tq->next;
            pd--;
        }
    }
    else if(pd>qd)
    {
        while(pd!=qd)
        {
            a=tp->a;
            n=tp->n;
            z=insertend(z,a,n);
            pd--;
            tp=tp->next;
        }
    }
    else
    {
        while(pd!=qd)
        {
            a=tq->a;
            n=tq->n;
            z=insertend(z,a,n);
            qd--;
            tq=tq->next;
        }
    }
    while(pd>=0)
    {
        a=tp->a+tq->a;
        n=tp->n;
        z=insertend(z,a,n);
        tp=tp->next;
        tq=tq->next;
        pd--;
    }
    return z;
}
void display(NODE *temp)
{
    if(temp==NULL)
    {
        printf("no equation\n");
        return;
    }
    while(temp->next!=NULL)
    {
        if(temp->a!=0)
            printf("%dX^%d",temp->a,temp->n);
            temp=temp->next;
            if(temp->a>0)
                printf("+");
    }
    if(temp->n==0||temp->a!=0)
        printf("%d",temp->a);
    else
        printf("%dX^%d",temp->a,temp->n);
}
int main()
{
    NODE *p=NULL,*q=NULL,*z=NULL;
        int i,pd,qd,a;
        printf("ENTER DEGREE OF POLYNOMIAL EQUATION P:\n");
        scanf("%d",&pd);
        printf("ENTER DEGREE OF POLYNOMIAL EQUATION Q:\n");
        scanf("%d",&qd);
        printf("enteer the coeficient of P: \n");
        for(i=pd;i>=0;i--)
        {
            printf("a%d: ",i);
            scanf("%d",&a);
            p=insertend(p,a,i);
        }
        printf("enteer the coeficient of Q: \n");
        for(i=qd;i>=0;i--)
        {
            printf("a%d: ",i);
            scanf("%d",&a);
            q=insertend(q,a,i);
        }
        z=addpoly(p,q,pd,qd);
        printf("P: ");
        display(p);
        printf("\n");
        printf("Q: ");
        display(q);
        printf("\n");
        display(z);
        return 0;
}

