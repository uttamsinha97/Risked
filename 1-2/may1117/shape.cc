#include<iostream>
#include<cstdlib>
using namespace std;
class shape
{
    protected:
    double x,y;
    public:
    virtual void getdata(double p,double q=0){}
    virtual void displayarea(){}
};
class tri:public shape
{
    public:
        void getdata(double p,double q=0)
        {
            x=p;
            y=q;
        }
        void displayarea()
        {
            double area=0.5*x*y;
            cout<<"area of triangle is:"<<area<<"\n";
        }
};

class rect:public shape
{
    public:
        void getdata(double p,double q=0)
        {
            x=p;
            y=q;
        }
        void displayarea()
        {
            double area=x*y;
            cout<<"area of rectangle is:"<<area<<"\n";
        }
};

class circle:public shape
{
    public:
        void getdata(double p,double q=0)
        {
            x=p;
            y=q;
        }
        void displayarea()
        {
            double area=3.1405*x*x;
            cout<<"area of circle is:"<<area<<"\n";
        }
};

int main()
{
    double var1,var2;
    int ch;
    shape *sp;
    sp=new shape;
    tri t;
    rect r;
    circle c;
    while(1)
        {
            cout<<"area of:\n";
            cout<<"1.triangle\n2.rectangle\n3.circle\n4.exit\n";
            cin>>ch;
            switch(ch)
            {
                case 1:
                cout<<"enter base and height\n";
                cin>>var1>>var2;
                sp=&t;
                sp->getdata(var1,var2);
                sp->displayarea();
                break;

                case 2:cout<<"enter length and breadth\n";
                cin>>var1>>var2;
                sp=&r;
                sp->getdata(var1,var2);
                sp->displayarea();
                break;

                case 3:cout<<"enter radius\n";
                cin>>var1;
                sp=&c;
                sp->getdata(var1);
                sp->displayarea();
                break;

                case 4:exit(0);

                default:cout<<"invalid input\n";

                }
        }
    return 0;
}
