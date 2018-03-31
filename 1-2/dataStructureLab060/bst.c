#include<stdio.h>
#include<stdlib.h>

struct NODE
{
	int info;
	struct NODE *lchild;
	struct NODE *rchild;
};

typedef struct NODE* NODEPTR;

void display(NODEPTR ,int);
void postorder(NODEPTR);
void inorder(NODEPTR);
void preorder(NODEPTR);
NODEPTR insertNode(int ,NODEPTR);
void releaseNode(NODEPTR);
NODEPTR allocNode();
NODEPTR deleteNode(NODEPTR, int);
NODEPTR searchNode(NODEPTR, int);


int main(void)
{
	NODEPTR root = NULL;
	int ch,item;


	for(;;)
	{
		printf("\n1.Insert\n2.Inorder traversal\n3.Preorder traversal");
		printf("\n4.Postorder traversal\n5.Display\n6.Delete a Node\n7.Exit\n");
		printf("\nEnter your choice");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("Enter the item to be inserted \n");
					scanf("%d",&item);
					root = insertNode(item,root);
					break;

			case 2: if(root ==NULL)
					{
						printf("\nTree is Empty\n");
					}

					else
					{
						printf("\nInorder Traversal is :\n");
						inorder(root);
						printf("\n");
					}
					break;

			case 3: if(root ==NULL)
					{
						printf("\nTree is Empty\n");
					}
					else
					{
						printf("\nPreorder Traversal is :\n");
						preorder(root);
						printf("\n");
					}
					break;

			case 4: if(root ==NULL)
					{
						printf("\nTree is Empty\n");
					}
					else
					{
						printf("\nPostorder Traversal is :\n");
						postorder(root);
						printf("\n");
					}
					break;

			case 5: if(root ==NULL)
					{
						printf("\nTree is Empty\n");
					}
					else
					{
						printf("\nThe given Tree is:\n");
						display(root,1);
					}
					break;

			case 6: printf("\nEnter the value to be deleted\n");
                    scanf("%d", &item);
                    root = deleteNode(root, item);
                    break;
            case 7:	exit(0);

			default: printf("Wrong choice\n");
					 break;

		}
	}
	return 0;
}

NODEPTR allocNode()
{
	NODEPTR newborn;
	newborn = (NODEPTR)malloc(sizeof(struct NODE));

	if(newborn == NULL)
	{
		printf("\nMemory Overflow");
		exit(0);
	}
	return newborn;
}

void releaseNode(NODEPTR x)
{
	free(x);
}

NODEPTR insertNode(int item,NODEPTR root)
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

void preorder(NODEPTR root)
{
	if(root != NULL)
	{
		printf("%d\t",root->info);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}

void inorder(NODEPTR root)
{
	if(root != NULL)
	{
		inorder(root->lchild);
		printf("%d\t",root->info);
		inorder(root->rchild);
	}
}
void postorder(NODEPTR root)
{
	if(root != NULL)
	{
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%d\t",root->info);
	}
}

void display(NODEPTR root,int level)
{
	int j;
	if(root != NULL)
	{
		display(root->rchild,level+1);
		for(j=0;j<level;j++)
		printf("\t");

		printf("%02d\n",root->info);

		display(root->lchild,level+1);
	}
}

NODEPTR deleteNode(NODEPTR root, int item)
{
    NODEPTR cur, parent, desc, p;

    if(root == NULL)
    {
        printf("\nTree is Empty\n");
        return root;
    }
    parent = NULL;
    cur = root;
    while(cur != NULL)
    {
        if(item == cur->info) break;
        parent = cur;
        cur = (item < cur->info) ? cur->lchild: cur->rchild;
    }
    if(cur == NULL)
    {
        printf("\nItem not found\n");
        return root;
    }

    if(cur->lchild == NULL)
        p = cur->rchild;
    else if(cur->rchild == NULL)
        p = cur->lchild;
    else
    {
        desc = cur->rchild;
        while(desc->lchild != NULL)
            desc = desc->lchild;
        desc->lchild = cur->lchild;

        p = cur->rchild;
    }
    if(parent == NULL)
        return p;

    if(cur == parent->lchild)
        parent->lchild = p;
    else
        parent->rchild = p;
    free(cur);
    return root;
}

NODEPTR searchNode(NODEPTR root, int item)
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

