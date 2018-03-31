#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

struct dnode
{
    struct dnode *prev;
    struct dnode *next;
    int data;
};

int main()
{
    struct dnode *p;
    p=NULL;

    dappend(&p,10);
    dappend(&p,20);
    dappend(&p,30);
    dappend(&p,40);
    dappend(&p,50);
    dappend(&p,60);

    ddisplay(p);
    printf("no of elements in the dll\n",dcount(p));

    daddatbeg(&p,33);
    daddatbeg(&p,44);
    daddatbeg(&p,55);

    ddisplay(p);


}
