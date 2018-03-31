#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *rchild;
    struct node *lchild;
};
typedef struct node * nodeptr;

int main()
{
    nodeptr root=NULL;
    for(;;)
    {
        printf("\n1insert\n2inorder\n3preorder\n4postorder\n5display\n6delete a node\n\n");
        printf("enter your choice\n");
        scanf("%i",&choice);
        switch(choice)
        {
            case 1: printf("opted for inserting a node in the binary tree\n\n");
            printf("enter the item to be inserted into the tree\n\n");
            scanf("%i",&item);
            root=insertitem(item,root);
            break;
            case 2 : printf("in order traversal\n\n");
            inorder(root);
            break;
            case 3:printf("preorder traversal\n\n");
            preorder(root);
            break;
            case 4:printf("post oder traversal\n\n");
            postorder(root);
            break;
        }
    }
}
nodeptr getnode()
{
    nodeptr newborn;
    newborn=(struct node*)malloc(sizeof(struct node));
    return newborn;
}
void freenode(nodeptr x)
{
    free(x);
}
nodeptr insertitem(int item,nodeptr root)
{
    NODEPTR temp,prev,cur;
    temp = allocNode();
	temp->info = item;
	temp->lchild = NULL;
	temp->rchild = NULL;

	if(root == NULL)
	return temp;

	prev = NULL;
	cur = root;

	while(cur != NULL)
	{
		prev = cur;

		if(item == cur->info)
		{
			printf("\nDuplicate items not allowed\n");
			releaseNode(temp);
			return root;
		}

		cur = (item < cur->info)? cur->lchild: cur->rchild;
	}

	if(item < prev->info)
	prev->lchild = temp;
	else
	prev->rchild = temp;

	return root;

}
void inorder(nodeptr root)
{
    while(root!=NULL)
    {
        inorder(root->lchild);
        printf("%i  ",root->info);
        inorder((root->rchild));
    }
}
void preorder(nodeptr root)
{
    while(root!=NULL)
    {   printf("%i  ",root->info);
        preorder(root->lchild);
        preorder(root->rhcild);
    }
}
void postorder(nodeptr root)
{
    while(root!=NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d  ",root->info);
    }
}

