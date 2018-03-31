#include<iostream>
#include<stdlib.h>
using namespace std;
class complex5
{
    public:
        float real,imag;
        void display(complex5);
        void getdata(void)
        {
            cout<<"Enter the real and imaginary part of complex number\n";
            cin>>real>>imag;
        }
        complex5 add(float a,complex5 s1)
        {
            s1.real=a+s1.real;
            return(s1);
        }
        complex5 add(complex5 s1,complex5 s2)
        {
            s1.real=s1.real+s2.real;
            s1.imag=s1.imag+s2.imag;
            return(s1);
        }
};

void complex5::display(complex5 s1)
{
    if(s1.imag<0)
        cout<<"\n"<<s1.real<<s1.imag<<"i"<<"\n";
    else
        cout<<s1.real<<"+"<<s1.imag<<"i"<<"\n";
}
int main()
{
     complex5 s3,s1,s2;
     float a;
     int choice;
     while(1)
     {
          cout<<"\n1.Adding integer to a complex number\n2.Addition of two complex number\n3.Exit\n";
          cin>>choice;
          switch(choice)
          {
              case 1:cout<<"Enter integer a\n";
                     cin>>a;
                     s1.getdata();
                     s3=s3.add(a,s1);
                     s3.display(s3);
                     break;
              case 2: s1.getdata();
                      s2.getdata();
                      s3=s3.add(s1,s2);
                      s3.display(s3);
                      break;
              case 3: exit(1);
              default:cout<<"Invalid input\n";
          }
     }
     return 0;
}
