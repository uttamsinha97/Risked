#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
    int en;
    float basic,da,it,ns,gs;
    char name[30];
    public:
        void read_data(void);
        void calnet_sal(void);
        void print_data(void);
};
void employee::read_data(void)
{
    cout<<"enter employee no.,name,basic salary\n";
    cin>>en>>name>>basic;
}
void employee::calnet_sal(void)
{
    da=.52*basic;
    gs=basic+da;
    it=.3*gs;
    ns=basic+da-it;
}
void employee::print_data(void)
{
    cout<<"\n"<<en<<"\t"<<name<<"\t"<<basic<<"\t"<<da<<"\t"<<it<<"\t"<<ns<<"\t"<<"\n";
}
int main()
{
    class employee p[30];
    int n,i;
    cout<<"enter the number of employees to be entered\n";
    cin>>n;
    for(i=0;i<n;i++)
        {
            p[i].read_data();
        }   cout<<"---------------------------------------------------"<<endl;
        cout<<"EMPLOYEE NO"<<setw(10)<<"NAME"<<setw(10)<<"BASIC"<<setw(10)<<"D.A"<<setw(10)<<"I.TAX"<<setw(10)<<"NETSAL"<<endl;
        cout<<"---------------------------------------------------"<<endl;
    for(i=0;i<n;i++)
        {
            p[i].calnet_sal();
            p[i].print_data();
        }
        cout<<"---------------------------------------------------"<<endl;
    return 0;
}
