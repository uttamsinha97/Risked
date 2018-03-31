#include <stdio.h>
#include <stdlib.h>

struct sort
{
int info;
struct sort *link;
};

struct sort *start=NULL,*temp1;

void main()
{
int ch;
while(ch!=4)
  {
  printf("1 for insert values\n");
  printf("2 for delete values\n");
  printf("3 for display\n");
  printf("4 for Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d",&ch);
  switch(ch)
     {
     case 1:insert();break;
     case 2:delete_node();break;
     case 3:display();break;
     case 4:break;
     }
   }
}

insert()
{
struct sort*new;
new=(struct sort *)malloc(sizeof(struct sort));
printf("Enter Node Value: ");
scanf("%d",&new->info);
new->link=start;
start=new;
}
delete_node()
{
struct sort *temp;
temp=start->link;
start=temp;
}

display()
{
struct sort *temp;
printf("The node's information\n");
for(temp=start;temp!=NULL;temp=temp->link)
   {
   printf("%d\n",temp->info);
   }
printf("\nThe node's information After Sorting \n\n");
for(temp=start;temp!=NULL;temp=temp->link)
   {
     for(temp1=temp->link;temp1!=NULL;temp1=temp1->link)
       {
       if(temp->info > temp1->info)
           {
           int t=temp->info;
           temp->info=temp1->info;
           temp1->info=t;
           }
       }
   }

for(temp=start;temp!=NULL;temp=temp->link)
   {
   printf("%d\n",temp->info);
   }
}
