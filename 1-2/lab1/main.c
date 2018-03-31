#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    unsigned int id;
    char name[25];
    unsigned int sal;
    char dept[25];
    unsigned int age;
}EMPLOYEE;
char filename[25];
void read(int n)
{
    EMPLOYEE s;
    int i=1;
    FILE *fp;
    fp=fopen(filename,"a+");
    if(fp==NULL)
    {
        printf("error in opening file\n");
        exit(1);
    }
    while(n)
    {
        printf("enter the details of employee %d\n",i++);
        printf("name: ");
        scanf("%s",s.name);
        printf("emp id: ");
        scanf("%d",&s.id);
        printf("department: ");
        scanf("%s",s.dept);
        printf("SALARY: ");
        scanf("%d",&s.sal);
        printf("AGE: ");
        scanf("%d",&s.age);
        fwrite(&s,sizeof(EMPLOYEE),1,fp);
        n--;
    }
    fclose(fp);
}
void display()
{
    FILE* fp;
    EMPLOYEE emp;
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("no info available");
        exit(1);
    }

    printf("the details of employee are: \n");
    printf("em id        emp name      dept       salary       age \n");
    while(!feof(fp))
    {
        fread(&emp,sizeof(EMPLOYEE),1,fp);
        printf("%-10d%-15s%-10s%-8d\t%-d\n",emp.id,emp.name,emp.dept,emp.sal,emp.age);

    }
    fclose(fp);

}
void search()
{
    FILE *fp;
    EMPLOYEE emp;
   int found=0;int ch;
   int sal,id,age;
   char dept[25];
   printf("enter your choice of search: 1.age\t 2.employee id\t 3.salary\t 4.age\t");
   scanf("%d",&ch);
   fp=fopen(filename,"r");
   if(fp==NULL)
   {
       printf("error in opening file\n");
       exit(1);
   }
   switch(ch)
   {
       case 1:printf("enter the age: \n");
               scanf("%d",&age);
               while(!feof(fp))
               {
                   fread(&emp,sizeof(EMPLOYEE),1,fp);
                   if(age==emp.age)
                   {
                       found=1;
                       printf("NAME :%s",emp.name);
                       printf("EMP_ID :%d",emp.id);
                       printf("DEPT :%s",emp.dept);
                       printf("SALARY :%d",emp.sal);
                   }
               }
               break;
               case 2:printf("enter the employee id: \n");
               scanf("%d",&id);
               while(!feof(fp))
               {
                   fread(&emp,sizeof(EMPLOYEE),1,fp);
                   if(id==emp.id)
                   {
                       found=1;
                       printf("NAME :%s",emp.name);
                       printf("AGE :%d",emp.age);
                       printf("DEPT :%s",emp.dept);
                       printf("SALARY :%d",emp.sal);
                   }
               }
               break;
               case 3:printf("enter the salary: \n");
               scanf("%d",&sal);
               while(!feof(fp))
               {
                   fread(&emp,sizeof(EMPLOYEE),1,fp);
                   if(sal==emp.sal)
                   {
                       found=1;
                       printf("NAME :%s",emp.name);
                       printf("EMP_ID :%d",emp.id);
                       printf("DEPT :%s",emp.dept);
                       printf("AGE :%d",emp.age);
                   }
               }
               break;
               case 4:printf("enter the department: \n");
               scanf("%s",dept);
               while(!feof(fp))
               {
                   fread(&emp,sizeof(EMPLOYEE),1,fp);
                   if(!strcmp(emp.dept,dept))
                   {
                       found=1;
                       printf("NAME :%s",emp.name);
                       printf("EMP_ID :%d",emp.id);
                       printf("SALARY :%d",emp.sal);
                       printf("AGE :%d",emp.age);
                   }
               }
               break;
               default: printf("invalid option\n");
   }
               if(found==0)
               {
                   printf("\n no match found\n");
                   fclose(fp);
               }


}
int main()
{
    int n;
    int ch;
    printf("enter the file name : \n");
    scanf("%s",filename);
    do
    {
        printf("1.insert data\n2.display\n3.search\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter number of employee: ");
            scanf("%d",&n);
            read(n);
            break;
            case 2: display();
            break;
            case 3: search();
            break;
            case 4: exit(0);
            break;
            default:printf("invalid choice\n");
        }
    }
    while(1);
    return 0;
}
