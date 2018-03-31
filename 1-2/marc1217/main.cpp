#include <iostream>
using namespace std;
class employee
{
private:
    int number;
    char name[30];
    float basic,da,gs,it,ns;
public:
    void readdata();
    void calsal();
    void printdata();
};
void employee::readdata()
{
    cout <<"enter number"<<endl;
    cin>>number;
    cout<<"name"<<endl;
    cin>>name;
    cout<<"enter basic"endl;
    cin>>basic;
}
void employee::calsal()
{
    da=.52*basic;
    gs=basic+da;
    it=.3*gs;
    ns=basic+da-it
}

