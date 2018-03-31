#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *lchild,*rchild;
};
typedef struct node *NODE;
 void main()
 {
      int choice,data,key;
      NODE root=NULL;
      NODE CREATE(NODE,int);
      void INORDER(NODE),POSTORDER(NODE),PREORDER(NODE);
      NODE DELETE_NODE(NODE,int);
      while(1)
     {
	 printf("\n1:CREATE\n2:INORDER\n3:PREORDER\n4:POSTORDER\n5.DELETION\n6:EXIT");
	 printf("\nEnter your choice\n");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	      case 1: printf("\nEnter data to be inserted\n");
		      scanf("%d",&data);
		      root=CREATE(root,data);
		      break;
	      case 2: if(root==NULL)
			 printf("\nEMPTY TREE\n");
		      else
		      {
			 printf("\nINORDER TRAVERSAL:\n");
			 INORDER(root);
		      }
		      break;
	      case 3: if(root==NULL)
			 printf("\nEMPTY TREE\n");
		      else
		      {
			 printf("\nPREORDER TRAVERSAL:\n");
			 PREORDER(root);
		      }
		      break;
	      case 4: if(root==NULL)
			 printf("\nEMPTY TREE\n");
		      else
		      {
			 printf("\nPOSTORDER TRAVERSAL:\n");
			 POSTORDER(root);
		      }
		      break;
	      case 5: printf("\nenter the key to delete:\n");
		      scanf("%d",&key);
		      root=DELETE_NODE(root,key);
		      break;
	      case 6: exit(0);
	  }
      }
   }

   NODE  CREATE(NODE root,int data)
  {
       NODE newnode,x,parent;
       newnode=(NODE)malloc(sizeof(struct node));
       newnode->lchild=newnode->rchild=NULL;
       newnode->info=data;

       if(root==NULL)
	   root=newnode;
       else
       {
	   x=root;
	   while(x!=NULL)
	  	{
	       parent=x;
	       if(x->info<data)
		   x=x->rchild;
	       else if(x->info>data)
		   x=x->lchild;
	       else
	       {
		   	 printf("\nNode is already present in the tree\n");
		   	 return(root);
	       }
	    }

	   if(parent->info<data)
	      parent->rchild=newnode;
	   else
	      parent->lchild=newnode;
     }
      return(root);
  }

   void INORDER(NODE root)
   {
       if(root!=NULL)
       {
	   INORDER(root->lchild);
	   printf("%d ",root->info);
	   INORDER(root->rchild);
	}
    }

    void PREORDER(NODE root)
    {
	if(root!=NULL)
	{
	    printf("%d ",root->info);
	    PREORDER(root->lchild);
	    PREORDER(root->rchild);
	 }
     }

     void POSTORDER(NODE root)
     {
	 if(root!=NULL)
	 {
	     POSTORDER(root->lchild);
	     POSTORDER(root->rchild);
	     printf("%d ",root->info);
	  }
      }

       NODE  DELETE_NODE(NODE root, int key)
      {
	    NODE cur,q,parent,successor;
	    if(root==NULL)
	    {
		printf("\nTree is empty\n");
		return root;
	    }
	     parent=NULL,cur=root;
	     while(cur!=NULL)
	    {
		if(key==cur->info)
		    break;
		parent=cur;
		cur= (key<cur->info)?cur->lchild:cur->rchild;
	    }
	     if(cur==NULL)
	     {
		printf("\nData is not found\n");
		return root;
	     }

	     if(cur->lchild==NULL)
		q=cur->rchild;
	     else if(cur->rchild==NULL)
		q=cur->lchild;
	     else
	     {
		successor = cur->rchild;
		while(successor->lchild != NULL)
		      successor = successor->lchild;

		successor->lchild = cur->lchild;
		q = cur->rchild;
	     }

	     if (parent == NULL)
		 return q;
	     if(cur == parent->lchild)
		 parent->lchild = q;
	     else
		 parent->rchild = q;
	     printf("\n%d is deleted from BST\b",key);
	     free(cur);
	     return  root;
	 }



NODE searchNode(NODE root, int item)
{
    if(root == NULL)
        return root;
    if(item == root->info)
        return root;
    if(item < root->info)
        searchNode(root->lchild, item);
    else
        searchNode(root->rchild, item);

}
