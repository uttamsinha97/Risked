#include<stdio.h>
#include<bits/bits/stdc++.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;
};
typedef struct node * NODEPTR;

NODEPTR allocatetree(void)
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct node));
    return newborn;
}

void deletenodetree(NODEPTR first)
{
    free(first);
}

