#include <iostream>
using namespace std;
class Time
{
private:
    int hh,mm,ss;
public:
    Time gettime();
    Time displayTime();
};
Time Time::gettime()
{
    cout<<"enter hour"<<endl;
    cin>>hh;
    cout<<"enter minutes"<<endl;
    cin>>mm;
    cout<<"enter seconds"<<endl;
    cin>>ss;
}
