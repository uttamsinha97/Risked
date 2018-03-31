#include<iostream>
using namespace std;
class time
{
    int h,m,s;
    public:
        void gettime();
        void add(time t1,time t2);
        void disp();
}t1,t2,t3;
void time::gettime()
{
    cout<<"enter hour minute second\n";
    cin>>h>>m>>s;
}
void time::add(time t1,time t2)
{
    int x;
    x=t1.s+t2.s;
    s=x%60;
    x=x/60;
    x=x+t1.m+t2.m;
    m=x%60;
    h=t1.h+t2.h+x/60;
}
void time::disp()
{
    cout<<"After adding time is:";
    cout<<h<<":"<<m<<":"<<s;
}
int main()
{
    t1.gettime();
    t2.gettime();
    t3.add(t1,t2);
    t3.disp();
    return 0;
}
