#include<cstdlib>
#include<cmath>
#include<iostream>
using namespace std;
class octal
{
       public:
          int oct;
          octal(){}
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
      cout<<"y=k+Octal="<<k+p.oct<<"\n";
      return(k+p.oct);
}

int main()
{
      cout<<"Enter a number to convert:\n";
      int n;
      cin>>n;
      octal o=n;
      while(1)
      {
            cout<<"Enter\n1:INTEGER + OCTAL NO\n2:OCTAL NO + INTEGER\n3:exit"<<endl;
            int ch;
            cin>>ch;
            int y;
            if(ch==1)
            {
                  cout<<"Enter an INTEGER"<<endl;
                  int k;
                  cin>>k;
                  y=k+o;
            }
            else if(ch==2)
            {
                 cout<<"Enter an INTEGER"<<endl;
                 int k;
                 cin>>k;
                 y=o+k;
            }
            else if(ch==3)
            {
                 exit(0);
            }
            else
            {
                 cout<<"INVALID INPUT";
                  exit(0);
            }
      }
      return 0;
 }
