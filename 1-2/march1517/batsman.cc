#include<iostream>
#include<iomanip>
using namespace std;
class batsman
{
    int bcode;
    char bname[20];
    int innings,notout,runs;
    int batavg;
    void calcavg()
    {
        batavg=runs/(innings-notout);
    }
    public :
        void readdata ();
        void displaydata();
};
void batsman::readdata ()
{
    cout<<"Enter batsman code ";
    cin>>bcode;
    cout<<"Enter batsman name ";
    cin>>bname;
    cout<<"enter innings,not out and runs ";
    cin>>innings>>notout>>runs;
    calcavg();
}
void batsman::displaydata()
{
    cout<<endl;
    cout<<bcode<<setw(10)<<bname<<setw(10)<<innings<<setw(10)<<notout<<setw(10)<<runs<<batavg<<endl;
}
int main()
{
    batsman obj[10];
    int n,i;
    cout<<"enter the number of batsman to be entered\n";
    cin>>n;
    for(i=0;i<n;i++)
        {
            obj[i].readdata();
        }
    cout<<"---------------------------------------------------"<<endl;
    cout<<"BATSMAN NO"<<setw(10)<<"NAME"<<setw(10)<<"INNINGS"<<setw(10)<<"NOTOUT"<<setw(10)<<"R UNS"<<setw(10)<<"BATTING   AVG"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    for(i=0;i<n;i++)
        {
            obj[i].displaydata();
        }
    cout<<"---------------------------------------------------"<<endl;
    return 0;
}
