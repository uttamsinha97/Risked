#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include <windows.h>
struct node
{
    struct node *left;
    struct node *right;
    char data;
};

char arr[]={'A','B','C','D','E','F','\0','\0','H',};
int lc[]={1,2,3,4,,5,6,7,};
int rc[]={8,2,3,4,5,6,7};
struct node *buildtree(int);
struct node
{
    struct node *root;
    root=buildtree(0);
    printf("in order traversal\n\n");
    inorder(root);
    return 0;
}
struct node *buildtree(int index)
{
 struct node *temp=NULL;
 if(index !=-1)
 {
     temp=(struct node *)malloc(sizeof(struct node));
     temp->left=buildtree(lc[index]);
     temp->data=arr[index];
     temp->right=buildtree(rc[index]);
 }
 return temp;
}
void inorder(struct node *root)
{
    if(root!= NULL)
    {
        inorder(root->left);
        printf("%c\t",root->data);
        inorder(root->right);
    }
}
// tree not working properly
//
