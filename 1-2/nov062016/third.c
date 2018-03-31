#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};

int main()
{
    struct dnode *p;
    p=NULL;
    dappend(&p,1);
    dappend(&p,2);
    dappend(&p,3);
    dappend(&p,4);
    dappend(&p,5);

    ddisplay(p);

    printf("no of elements in doubly linked list is %d\n",dcount(p));

    daddatbeg(&p,10);
    daddatbeg(&p,20);
    daddatbeg(&p,30);

    ddisplay(p);
    printf("no of elements in doubly linked list is %d\n",dcount(p));

    daddafter(p,4,66);
    daddafter(p,2,99);



}
