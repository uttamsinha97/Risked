#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *lchild,*rchild;
};
typedef struct node *NODE;

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


