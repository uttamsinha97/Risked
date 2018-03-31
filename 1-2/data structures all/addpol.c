#include <stdio.h>
#include <stdlib.h>
struct node
{
    int a,n;
    struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;
NODE *insert(NODE *start,int a,int n)
{
    NODE *New,*temp;
    New=(NODE *)malloc(sizeof(NODE));
    if(New==NULL)
    {
        printf("Allocation error\n");
        return(start);
    }
    New->a=a;
    New->n=n;
    New->next=NULL;
    if(start==NULL)
    {
        start=New;
        return(start);
    }
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=New;
    return(start);
}
void display(NODE *start)
{
    NODE *temp;
    if(start==NULL)
    {
        printf("No Equation\n");
        return;
    }
    temp=start;
    printf("\nThe list is:\n");
    while(temp->next!=NULL)
    {
        printf("%dX^%d ",temp->a,temp->n);
        temp=temp->next;
    if(temp->a>0)
        printf("+ ");
    }
    if(temp->n==0)
    printf("%d ",temp->a);
    else
        printf("%dX%d ",temp->a,temp->n);

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
            z=insert(z,a,n);
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
           z=insert(z,a,n);
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
           z=insert(z,a,n);
           qd--;
           tq=tq->next;
       }
   }
    while(pd>=0)
        {
            a=tp->a+tq->a;
            n=tp->n;
            z=insert(z,a,n);
            tp=tp->next;
            tq=tq->next;
            pd--;
        }
        return z;
    }
int main()
{
    NODE *p=NULL,*q=NULL,*z=NULL;
    int pd,qd,a,i;
    printf("Enter the degree of the polynomial 1\n");
    scanf("%d",&pd);
    printf("Enter the degree of the polynomial 2\n");
    scanf("%d",&qd);
    printf("Enter coefficients for polynomial 1\n");
    for(i=pd;i>=0;i--)
    {
        printf("a%d:",i);
        scanf("%d",&a);
        p=insert(p,a,i);
    }
    printf("Enter coefficients for polynomial 2\n");
      for(i=qd;i>=0;i--)
    {
        printf("a%d:",i);
        scanf("%d",&a);
        q=insert(q,a,i);
    }
    z=addpoly(p,q,pd,qd);
    display(p);
    printf("\n");
    display(q);
    printf("\n");
    display(z);
    return 0;
}
