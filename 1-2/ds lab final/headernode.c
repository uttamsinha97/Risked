#include <stdio.h>

#include <stdlib.h>

struct node

{

int data;

struct node *prev;

struct node *next;

};

typedef struct node NODE;

NODE *first=NULL;

NODE *end=NULL;

void insertNextInformation(int data, int posdata)

{

NODE *New, *temp, *tempn;

New=(NODE *)malloc(sizeof(NODE));

if(New==NULL)

{

printf("Memory allocation error");

return ;

}

New->data=data;

New->next=New->prev=NULL;

if(first->next==NULL)

{

first->next=New;

end->next=New;

first->data++;

end->data++;

return ;

}

else

{

temp=first->next;

while(temp!=NULL && temp->data!=posdata)

temp=temp->next;

if(temp==NULL)

{

printf("Position not found...");

return ;

}

else if(temp->next==NULL)

{

New->prev=temp;

temp->next=New;

end->next=New;

}

else

{

tempn=temp->next;

New->next=tempn;

temp->next=New;

New->prev=temp;

tempn->prev=New;

}

first->data++;

end->data++;

}

return ;

}

void deleteFirst()

{

NODE *temp=end->next;

if(end->next==NULL)

{

printf("List is empty");

return;

}

if(temp->prev==NULL)

{

first->next=end->next=NULL;

printf("Deleted element is %d\n",temp->data);

free(temp);

first->data--;

end->data--;

return;

}

temp=end->next;

while(temp->prev != NULL)

temp=temp->prev;

temp->next->prev=NULL;

first->next=temp->next;

printf("Deleted element is %d\n",temp->data);

first->data--;

end->data--;

free(temp);

}

void deletePosition(int pos)

{

NODE *temp=first->next, *prenode;

int count=1;

if(first->next==NULL)

{

printf("List is empty");

return;

}

/* check if position is the first node and that itself is the end node */

if(pos==count && temp->next==NULL)

{

first->next=end->next=NULL;

printf("Deleted element is %d\n",temp->data);

free(temp);

first->data--;

end->data--;

return;

}

/* check position is 1 and delete */

if(pos==count)

{

first->next=first->next->next;

first->next->prev=NULL;

printf("Deleted element is %d\n",temp->data);

free(temp);

first->data--;

end->data--;

return;

}

temp=first->next;

/* point the temp pointer to node which we want to delete or until temp not equal to

NULL */

while(count!=pos && temp != NULL)

{

temp=temp->next;

count++;

}

/* check if position is invalid using temp as NULL */

if(temp==NULL)

{

printf("\nPosition not found...");

return;

}

prenode=temp->prev;

if(temp->next==NULL)

{

prenode->next=temp->next;

end->next=prenode;

}

else

{

prenode->next=temp->next;

temp->next->prev=prenode;

}

printf("Deleted element is %d\n",temp->data);

free(temp);

first->data--;

end->data--;

return;

}

/* function to swap nth and mth node */

void swapNode(int n, int m)

{

NODE *nthnode, *mthnode;

int count=1,data;

if(n>first->data || m>first->data)

{

printf("Invalid position");

return;

}

nthnode=mthnode=first->next;

while(count!=n && nthnode!=NULL) /* point the pointer to nth node */

{

nthnode=nthnode->next;

count++;

}

count=1;

while(count!=m && mthnode!=NULL) /* point the pointer to mth node */

{

mthnode=mthnode->next;

count++;

}

data=nthnode->data; /* swap the node value i.e nth node to mth node */

nthnode->data=mthnode->data;

mthnode->data=data;

return;

}

void display()

{

NODE * start=first->next;

if(start==NULL) /* check is list is empty */

{

printf("\nList is empty...");

return;

}

printf("List is : ");

while(start->next!=NULL) /* display node value till last bit one node */

{

printf("%d -> ",start->data);

start=start->next;

}

printf("%d ",start->data); /* print last node value */

}

int main()

{

int data,choice,posdata,pos,nth,mth;

first=(NODE *)malloc(sizeof(NODE));

end=(NODE *)malloc(sizeof(NODE));

if(first==NULL || end==NULL)

{

printf("Error in memory allocation");

exit(1);

}

first->next=first->prev=end->next=end->prev=NULL;

first->data=end->data=0;

do

{

printf("\n1. Insert next to node whose node value is given \n2. Delete first node \n3.

Delete position node \n 4. Swap nth and Mth Node\n 5. Display\n6. Exit\nEnter your

choice: ");

scanf("%d",&choice);

switch(choice)

{

case 1: printf("Enter data to insert : ");

scanf("%d",&data);

printf("Enter position data to insert : ");

scanf("%d",&posdata);

insertNextInformation(data,posdata);

break;

case 2: deleteFirst();

break;

case 3: printf("\nEnter position of a node to delete : ");

scanf("%d",&pos);

deletePosition(pos);

break;

case 4: printf("\nEnter nth and mth position of a node to swap : ");

scanf("%d%d",&nth,&mth);

swapNode(nth,mth);

break;

case 5: display();

break;

case 6: exit(0);

break;

default: printf("Invalid choice...");

}

}while(1);

return 0;
}
