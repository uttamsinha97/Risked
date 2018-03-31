/*** PROGRAM 17A: CREATION OF EXPRESSION TREE FOR POSTFIX EXPRESSION AND EVALUATION ***/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
struct node
{
      char info;
      struct node *lchild,*rchild;
};
typedef struct node *TREE;
float eval(TREE);
TREE  create_tree(char *);

      void main( )
     {
	 char postfix[30];
	 float res;
	 TREE * root = NULL;
	 printf("\nEnter a valid Postfix expression\n");
	 scanf("%s",postfix);
	 root = create_tree(postfix);
	 res = eval (root);
	 printf("\nResult = %f\n",res);
    }

       TREE  create_tree(char postfix[ ])
      {
	 TREE newnode, stack[20];
	 int i=0, top = -1;
	 char ch;
	 while( (ch=postfix[i++])!='\0')
	{
	     newnode = ( TREE )malloc( sizeof ( struct node ));
	     newnode->info = ch;
	     newnode->lchild = newnode->rchild = NULL;
	     if(isalnum(ch))
		stack[++top]=newnode;
	     else
	     {
		newnode->rchild = stack[top--];
		newnode->lchild = stack[top--];
		stack[++top]=newnode;
	     }
	  }
	   return(stack[top--]);
       }

      float  eval (TREE root)
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
