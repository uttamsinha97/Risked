#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define MAX 5

struct data;
{
    char job[MAX];
    int prno;
    int ord;
};
struct pque
{
    struct data d[MAX];
    int front;
    int rear;
};
int main()
{
    struct pque q;
    struct data dt,temp;
    int i,j=0;
    initpque(&q);

    printf("enter job description (max 4 char) and its priority\n");
    printf("lower the priority number, higher is the priority\n");
    printf("job priority\n");

    for(i=0;i<MAX;i++)
    {
        scanf("%s%d",&dt.job,&dt.prno);
        dt.ord==j++;
        add(&q,dt);
    }
    printf("\n");

}
