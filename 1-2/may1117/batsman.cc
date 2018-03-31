#include <iostream>
#include <string.h>
#include <ctype.h>
#include <iomanip>
using namespace std;
class batsman
{
   char name[30];
   int batco,inn,no,rn;
   float bavg;
   void calcavg();
   public:
   void read()
   {
       cout<<"\nenter name of batsman:\n";
       cin>>name;
       cout<<"\nenter batsman code:\n";
       cin>>batco;
       cout<<"\nenter NUMBER OF INNINGS:\n";
       cin>>inn;
       cout<<"\nENTER NUMBER OF TIMES NOT OUT:\n";
       cin>>no;
       cout<<"\nenter RUNS:\n";
       cin>>rn;
       calcavg();
   }

   void display()
   {

       cout<<setw(4)<<batco<<setw(8)<<name<<setw(10)<<inn<<setw(10)<<no<<setw(9)<<rn<<setw(10)<<setprecision(4)<<bavg<<endl;
   }
};
void batsman::calcavg()
   {
       bavg=(float)rn/(inn-no);
   }
int main()
{
    int n,i;
    cout<<"\nenter the number of BATSMAN:\n";
    cin>>n;
    batsman b[n];
    for(i=0;i<n;i++)
    {
       b[i].read();
    }
    cout<<"\ndetails are:\n";
    cout<<"---------------------BATSMAN DETAILS-------------------------\n";
    cout<<setw(4)<<"BAT_CO"<<setw(9)<<"Bname"<<setw(9)<<"INNS:"<<setw(10)<<"NO'S"<<setw(8)<<"RUNS"<<setw(9)<<"BATAVG"<<endl;
    for(i=0;i<n;i++)
        b[i].display();
    cout<<"--------------------------------------------------------------";
    return 0;

}
