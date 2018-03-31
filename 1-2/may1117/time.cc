#include <iostream>

using namespace std;
class TIME
{
    int hh,mm,ss,day;
public:
    void read_time();
    void sum(TIME,TIME);
    void display();
    void display1();
};
void TIME::read_time()
{
    cout<<"Enter the time in hours minutes and seconds\n";
    cin>>hh>>mm>>ss;
    if(hh<0||hh>23)
    {
        cout<<"Enter a valid hour:";
        cin>>hh;
    }
    if(mm<0||mm>59)
    {
        cout<<"Enter a valid minute:";
        cin>>mm;
    }
    if(ss<0||ss>59)
    {
        cout<<"Enter a valid second:";
        cin>>ss;
    }
}
void TIME::sum(TIME t1,TIME t2)
{
    ss=t1.ss+t2.ss;
    mm=ss/60;
    ss=ss%60;
    mm=mm+t1.mm+t2.mm;
    hh=mm/60;
    mm=mm%60;
    hh=hh+t1.hh+t2.hh;
}
void TIME::display()
{
    cout<<"HH:"<<hh<<" "<<"MM:"<<mm<<" "<<"SS:"<<ss<<"\n";
}
void TIME::display1()//for showing time in day hour minute and second;
{
    if(hh>24)
    {
        day=hh/24;
        hh=hh%24;
    }

    cout<<"\n"<<day<<"day"<<" "<<hh<<"hour"<<" "<<mm<<"minutes"<<" "<<ss<<"seconds";
}
int main()
{
    TIME t1,t2,t3;
    cout<<"Enter time t1\n";
    t1.read_time();
    cout<<"Enter time t2\n";
    t2.read_time();
    cout<<"\n\ntime 1:\n";
    t1.display();
    cout<<"\ntime 2:\n\n";
    t2.display();
    t3.sum(t1,t2);
    cout<<"Sum is: ";
    t3.display();
    t3.display1();
    return 0;
}
