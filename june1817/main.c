#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;
};
typedef struct node * NODEPTR;

NODEPTR allocatenode()
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct node));
    return newborn;
}

void deletenode(NODEPTR first)
{
    free(first);
}
