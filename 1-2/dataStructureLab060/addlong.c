#include<stdio.h>
#include<stdlib.h>
typedef struct ll
{
int digit;
struct ll *next;
}number;
void add(number **hd,int i);
void traverse(number *hd);
void reverse(number **hd);
void adds(char a[],number **hd);
void addhead(number *hd1,number *hd);
void freeh(number **hd);
number *head3;
void main()
{
number *head1=NULL,*head2=NULL;
char a[500],b[500],c[500];
char i;
printf("PROGRAM TO ADD TWO VERY VERY LONG NUMBERS !!\n\n");
printf("\nEnter First Number \n");
gets(a);
printf("\nEnter Second Number \n");
gets(b);
adds(a,&head1);
adds(b,&head2);
addhead(head1,head2);
printf("\nADDITION OF FIRST AND SECOND NUMBER IS \n");
traverse(head3);
freeh(&head1);
freeh(&head2);
}
void freeh(number **hd)
{
number *temp;
while(*hd!=NULL)
{
temp=*hd;
*hd=(*hd)->next;
free(temp);
}
*hd=NULL;
}
void add(number **hd,int i)
{
number *t;
t=(number*)malloc(sizeof(number));
t->next=NULL;
t->digit=i;
if(*hd==NULL)
{
*hd=t;
return;
}
t->next=*hd;
*hd=t;
}
void traverse(number *hd)
{
printf("\n");
while(hd!=NULL)
{
printf("%d",hd->digit);
hd=hd->next;
}
}

void reverse(number **hd)
{
number *p,*q,*r;
if(*hd==NULL)
return;
p=*hd;
if(p->next==NULL)
return;
q=p->next;
if(q->next==NULL)
{
q->next=p;
p->next=NULL;
*hd=q;
return;
}
r=q->next;
while(r->next!=NULL)
{
q->next=p;
p=q;
q=r;
r=r->next;
}
q->next=p;
r->next=q;
(*hd)->next=NULL;
*hd=r;

}
void addhead(number *hd1,number *hd2)
{
int x,carry=0,sum=0;
reverse(&hd1);
reverse(&hd2);
while(hd1!=NULL&&hd2!=NULL)
{
x=(hd1)->digit+(hd2)->digit + carry;
sum=x % 10;
carry=x / 10;
add(&head3,sum);
hd1=(hd1)->next;
hd2=(hd2)->next;
}
if(hd1==NULL&&hd2!=NULL)
{
while(hd2!=NULL)
{
x=(hd2)->digit + carry;
sum=x % 10;
carry=x / 10;
add(&head3,sum);
hd2=(hd2)->next;
}
}
else if(hd1!=NULL&&hd2==NULL)
{
while(hd1!=NULL)
{
x=(hd1)->digit + carry;
sum=x % 10;
carry=x / 10;
add(&head3,sum);
hd1=(hd1)->next;
}
}
if(carry>0)
add(&head3,carry);
reverse(&hd1);
reverse(&hd2);
//reverse(hd3);
}
void adds(char a[],number **hd)
{
int i=0;
while(a[i]!= '\0')
{
add(hd,a[i]- '0');
i++;
}
reverse(hd);
}