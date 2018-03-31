#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node * lchild;
    struct node * rchild;
};
typedef struct node * NODE;
int main()
{
    NODE root=NULL;
}
NODE createt(NODE root,int data)
{
    NODE newnode,x,parent;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->info=data;
    newnode->lchild=newnode->rchild=NULL;
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        x=root;
        while(x!= NULL)
        {
            parent=x;
            if(x->info<data)
                x=x->rchild;
            else if
                x=x->lchild;
            else
            {
                printf("node is already present in the tree\n");
                return root;
            }
        }
        if(parent->info<data)
            parent->rchild=newnode;
        else
            parent->lchild=newnode;
    }
    return root;
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
void
