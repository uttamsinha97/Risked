#include <iostream>
#include <iomanip>
using namespace std;
class employee
{
   char name[30];
   int empno,basic;
   float da,it,ns,gs;
   public:
   void read()
    {
       cout<<"\nenter name of employee:\n";
       scanf("%s",name);
       cout<<"\nenter employee number:\n";
       cin>>empno;
       cout<<"\nenter BASIC:\n";
       cin>>basic;
       calc();
    }
   void calc()
   {
       da=(52*basic)/100;
       gs=basic+da;
       it=(30*gs)/100;
       ns=basic+(da-it);
   }
   void display()
   {

       cout<<"|"<<setw(4)<<empno<<setw(10)<<name<<setw(10)<<basic<<setw(10)<<da<<setw(9)<<gs<<setw(8)<<it<<setw(8)<<ns<<"\t|"<<endl;

   }
};
int main()
{
    int n,i;
    cout<<"\nenter the number of employee:\n";
    cin>>n;
    employee e[n];
    for(i=0;i<n;i++)
    {
       e[i].read();
    }
    cout<<"\ndetails are:\n";
    cout<<"---------------------EMPLOYEE DETAILS----------------------------\n";
    cout<<setw(4)<<"|EMP_NUM"<<setw(10)<<"emp_name"<<setw(8)<<"BASIC"<<setw(8)<<"DA"<<setw(8)<<"gs"<<setw(8)<<"IT"<<setw(8)<<"NS\t\t|"<<endl;
    for(i=0;i<n;i++)
        e[i].display();
    cout<<"-----------------------------------------------------------------";
    return 0;

}
