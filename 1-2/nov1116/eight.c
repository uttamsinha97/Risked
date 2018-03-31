/*** PROGRAM 17B: CREATION OF EXPRESSION TREE FOR PREFIX EXPRESSION AND EVALUATION ***/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
struct node
{
      char info;
      struct node *lchild,*rchild;
};
typedef struct node TREE;
float eval(TREE*);
TREE * create_tree(char *);

      void main( )
     {
	 char prefix[30];
	 float res;
	 TREE *root = NULL;
	 printf("\nEnter a valid Prefix expression\n");
	 scanf("%s",prefix);
	 strrev(prefix);
	 root = create_tree(prefix);
	 res = eval(root);
	 printf("\nResult = %f\n",res);
	 getch();
     }

       TREE * create_tree(char prefix[ ])
      {
	 TREE *newnode, *stack[20];
	 int i=0, top = -1;
	 char ch;
	 while((ch=prefix[i++])!='\0')
	{
	     newnode = (TREE*)malloc(sizeof (TREE));
	     newnode->info = ch;
	     newnode->lchild = newnode->rchild = NULL;
	     if(isalnum(ch))
		stack[++top]=newnode;
	     else

	     {
		newnode->lchild = stack[top--];
		newnode->rchild = stack[top--];
		stack[++top]=newnode;
	     }
	  }
	   return(stack[top--]);
       }

      float  eval (TREE *root)
     {
	 float num;
	 switch(root->info)
	{
	    case  '+' : return (eval(root->lchild) + eval(root->rchild));
	    case  '-' : return (eval(root->lchild) - eval(root->rchild));
	    case  '*' : return (eval(root->lchild) * eval(root->rchild));
	    case  '/' : return (eval(root->lchild) / eval(root->rchild));
	    case  '^' : return (pow(eval(root->lchild), eval(root->rchild)));
	    default:    if(isalpha(root->info))
			{
			    printf("\n%c = ",root->info);
			    scanf("%f",&num);
			    return(num);
			}
			else
			return(root->info - '0');
    }
}
