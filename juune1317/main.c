#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * rchild;
    struct node * lchild;
};
typedef struct node * NODEPTR ;

