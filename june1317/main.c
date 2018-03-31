#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * rchild;
    struct node * lchild;
};

typedef struct node * NODEPTR;

NODEPTR allocatenodetree(void)
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct node));
    return newborn;
}

void deletenodetree(NODEPTR first)
{
    free(first);
}

NODEPTR maketree(NODEPTR root, int element)
{
    NODEPTR newnode;
    NODEPTR x;
    NODEPTR parent;
    newnode=allocatenodetree();
    newnode->data=element;
    newnode->lchild=newnode->rchild=NULL;
    if(root==NULL)
        root=newnode;
    else
    {
        x=root;
        while(x != NULL)
        {
            parent=x;
            if(x->data < element)
                x=x->rchild;
            else if(x->data > element)
                x=x->lchild;
            else
            {
                 printf("element is already present\n\n");
                 return root;
             }
        }
        if(parent->data < element)
            parent->rchild=newnode;
        else
            parent->lchild=newnode;
    }
    return root;
}

void inorder(NODEPTR root)
{
    while(root != NULL)
    {
        inorder(root->lchild);
        printf("%d   ", root->data);
        inorder((root->rchild));
    }
}

void preorder(NODEPTR root)
{
    while(root != NULL)
    {
        printf("%d   ",root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

void postorder(NODEPTR root)
{
    while( root != NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d   ",root->data);
    }
}


 int main()
 {
      int choice,data;
      NODEPTR root=NULL;
      NODEPTR maketree(NODEPTR,int);
      void inorder(NODEPTR),postorder(NODEPTR),preorder(NODEPTR);
      while(1)
     {
	 printf("\n1:CREATE\n2:INORDER\n3:PREORDER\n4:POSTORDER\n6:EXIT");
	 printf("\nEnter your choice\n");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	      case 1: printf("\nEnter data to be inserted\n");
		      scanf("%d",&data);
		      root=maketree(root,data);
		      break;
	      case 2: if(root==NULL)
			 printf("\nEMPTY TREE\n");
		      else
		      {
			 printf("\nINORDER TRAVERSAL:\n");
			 inorder(root);
		      }
		      break;
	      case 3: if(root==NULL)
			 printf("\nEMPTY TREE\n");
		      else
		      {
			 printf("\nPREORDER TRAVERSAL:\n");
			 preorder(root);
		      }
		      break;
	      case 4: if(root==NULL)
			 printf("\nEMPTY TREE\n");
		      else
		      {
			 printf("\nPOSTORDER TRAVERSAL:\n");
			 postorder(root);
		      }
		      break;
	      case 6: exit(0);
	  }
      }
   }
