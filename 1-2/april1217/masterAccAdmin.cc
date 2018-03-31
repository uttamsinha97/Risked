#include<iostream>
#include<cstdlib>
#include<string.h>
#include<iomanip>
using namespace std;
int count=0;
class person
{
    protected:
        char name[20];
        int code;
    public:
        void getcode()
        {
            cout<<"\nEnter the code"<<endl;
            cin>>code;
        }
        int rcode()
        {
            return code;
        }
        //friend void update();
        void getname()
        {
            cout<<"\n Enter the name"<<endl;
            cin>>name;
        }
};

class account : virtual public person
{
    protected:
        int pay;
    public:
        void getpay()
        {
            cout<<pay<<"\n";
            cout<<"\n Enter payment"<<endl;
            cin>>pay;
        }
};

class admin:virtual public person
{
    protected:
        int exp;
    public:
        void getexp()
        {
            cout<<"Enter the experience"<<endl;
            cin>>exp;
        }
};

class master:public account,public admin
{
    public:
        void create()
        {
            getcode();
            getname();
            getpay();
            getexp();
        }
    //friend void update();
    void display()
    {
        cout<<"\n";
        cout<<code<<setw(20);
        cout<<nme<<setw(10);
        cout<<pay<<setw(17);
        cout<<exp<<setw(03);
        cout<<"\n";
    }
};

master m[20];
void update()
{
    int c,ch,i;
    cout<<"Enter code";
    cin>>c;
    for(i=0;i<count;i++)
        {
            if(c==m[i].rcode())
            {
                cout<<"enter your choice"<<endl;
                cout<<"1.payment 2.experience 3.exit"<<endl;
                cin>>ch;
                switch(ch)
                {
                    case 1:m[i].getpay();break;
                    case 2:m[i].getexp();break;
                    case 3:return;
                    default:cout<<"invalid entry"<<endl;
                }
            }
            else
                cout<<"Code not found"<<endl;
        }
}

int main()
{
    int ch;
    while(1)
        {
            cout<<"Enter your choice"<<endl;
            cout<<" 1.create\n 2.update\n 3.display\n 4.exit"<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1:m[count++].create();
                break;
                case 2:update();
                break;
                case 3:
                cout<<"\nCODE"<<setw(20)<<"NAME"<<setw(10)<<"PAYMENT"<<setw(17)<<"EXPE RIENCE"<<setw(03)<<endl;
                for(int i=0;i<count;i++)
                    {
                        m[i].display();
                    }
                break;
                case 4:exit(0);
                default:cout<<"invalid entries"<<endl;
                }
            }
    return 0;
}
