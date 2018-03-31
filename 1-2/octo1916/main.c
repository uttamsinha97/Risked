#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    unsigned int id;
    char name[25];
    unsigned int sal;
    char dept [25];
    unsigned int sal;
}EMPLOYEE;
char filename[25];
void read(int n)
{
    EMPLOYEE s;
    FILE *fp;
    fp=fopen(filename,"a+");
    if(fp==NULL)
    {
        printf("error in opening file\n\n");
        exit(1);
    }
    while(1)
    {
        printf("enter the detail\n\n");
        printf("name\n");
        scanf("%s",s.name);
        printf("employee id\n\n");
        scanf("%d",&s.id);
        printf("department\n\n");
        scanf("%s",s.dept);
    }
}

int main()
{

}
