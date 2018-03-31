#include<cstdlib>
#include<cmath>
#include<iostream>
using namespace std;
class octal
{
    int oct;
    public:
    octal()
    {
        oct=0;
    }
    octal(int n)
    {
            int r=0;
            int s=0;
            while(n!=0)
                {
                    static int i=0;
                    r=n%8;
                    s=s+r*pow(10,i);
                    n=n/8;
                    i++;
                }
                oct=s;
                cout<<"Converted number is:"<<oct<<endl;
    }
            friend int operator +(int k,octal p);
            friend int operator +(octal p,int k);
};
int operator +(int k,octal p)
{
    cout<<"y=k+Octal="<<k+p.oct<<"\n";
    return(k+p.oct);
}
int operator +(octal p,int k)
{
    cout<<"y=Octal+k="<<p.oct+k<<"\n";
    return(k+p.oct);
}
int main()
{           cout<<"Enter a number for conversion:\n";
            int n;
            cin>>n;
            octal o=n;
            while(1)
                {
                    cout<<"\tEnter\n\n\t1:int+octal number;\n\t2:octal number+int;\n\t3:exit;"<<endl;
                    int ch;
                    cin>>ch;
                    int y;
                    if(ch==1)
                        {
                            cout<<"Enter int"<<endl;
                            int k;
                            cin>>k;
                            y=k+o;
                        }
                    else if(ch==2)
                        {
                            cout<<"Enter integer"<<endl;
                            int k;
                            cin>>k;
                            y=o+k;
                        }
                    else
                        if(ch==3)
                        {
                            exit(0);
                        }
                    else
                        {
                            cout<<"Invalid i/p";
                            exit(0);
                        }
                    }
return(0);
}
