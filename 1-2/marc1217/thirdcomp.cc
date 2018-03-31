#include<iostream>
using namespace std;
class complex  {
  float imag,real;
  public:
      friend complex add(float,complex);
  friend complex add(complex,complex);    void display(complex);    void getdata(void)
   {    cout<<"Enter the real and imag part of complex\n";    cin>>real>>imag;    }  };
   complex add(float a,complex s1)  {      s1.real=s1.real+a;    return(s1);  }  complex add(complex s1,complex s2)  {   s1.real=s1.real+s2.real;
 s1.imag=s1.imag+s2.imag;   return(s1);  }  void complex::display(complex s1)  {   cout<<"\n"<<"sum="<<s1.real<<"+i"<<s1.imag<<"\n";  }   int main()  {    complex s3,s1,s2;   float a;   int choice;   do{    cout<<"\n1.Adding integer to a complex number\n2.Addition of two complex number\n3.Exit\n";    cin>>choice;    switch(choice)    {     case 1:      cout<<"Enter integer a\n";      cin>>a;      s1.getdata();      s3=add(a,s1);      s3.display(s3);      break;     case 2:      s1.getdata();      s2.getdata();      s3=add(s1,s2);      s3.display(s3);      break;     case 3: break;     default:      cout<<"Invalid input\n";         }    }while(choice!=3);   return 0;  }
