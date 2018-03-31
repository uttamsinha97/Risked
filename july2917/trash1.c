#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node * NODE1;

NODE1 allocating()
{
    NODE1 new1;
    new1=(NODE1)malloc(sizeof(struct node));
    return new1;
}

void deleting(NODE1 first)
{
    free(first);
}

NODE1 insert1(NODE1 first, int e)
{
    NODE1 first;
    first=allocating();


}
