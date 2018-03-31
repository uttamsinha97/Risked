#include<iostream>
#include<stdlib.h>
using namespace std;
class date
{
     int dd,mm,yy;
     public:
       int operator-(date d2);
       date operator+(int d);
       friend ostream & operator<<(ostream&,date&);
       friend istream & operator>>(istream&,date&);
};
int leap(int a)
{
     if(a%4==0)
         return 1;
     else
        return 0;
}
int month(int m,int y)
{
    switch(m)
    {
          case 1:
          case 3:
          case 5:
          case 7:
          case 8:
          case 10:
          case 12: return(31);
                    break;
          case 2:return(28+leap(y));
                  break;
          case 4:
          case 6:
          case 9:
          case 11:return(30);
                   break;
          default:cout<<"invalid months\n";
    }
}
date date::operator+(int d)
{
     date temp;
     temp.dd=0;
     temp.mm=mm;
     temp.yy=yy;
     d=d+dd;
     while(d>month(temp.mm,temp.yy))
     {
         d-=month(temp.mm,temp.yy);
         temp.mm++;
         if(temp.mm>12)
         {
             temp.yy++;
             temp.mm=1;
         }
     }
     temp.dd=d;
     return temp;
}
int date::operator-(date d2)
{
      int tm,ty;
      if(d2.yy>yy||(d2.yy==yy&&(d2.mm>mm||(d2.mm==mm&&d2.dd>dd))))
      {
          cout<<"invalid date\n";
          return -1;
      }
      tm=d2.mm;
      ty=d2.yy;
      int d=0;
      while(tm!=mm||ty!=yy)
      {
           d+=month(tm,ty);
           tm++;
           if(tm>12)
           {
               ty++;
               tm=1;
           }
       }
       d+=dd-d2.dd;
       return d;
}
istream & operator>>(istream & din,date &b)
{
     din>>b.dd>>b.mm>>b.yy;
     return(din);
}
ostream & operator<<(ostream & dout,date &b)
{
     dout<<"("<<b.dd<<"/"<<b.mm<<"/"<<b.yy;
     dout<<")";
     return dout;
}
int main()
{
     int c,d;
     date d1,d2;
     while(true)
    {
        cout<<"\n1.date+days\n2.date - date\n3.exit\nenter your choice\n";
        cin>>c;
        switch(c)
       {
            case 1:cout<<"\nEnter date(dd/mm/yy)\n";
                    cin>>d1;
                    cout<<"\nEnter the days\n";
                    cin>>d;
                    d2=d1+d;
                    cout<<"\nFinal date:\n"<<d2;
                    break;
            case 2:cout<<"\nEnter first date(dd/mm/yy)\n";
                    cin>>d1;
                    cout<<"\nEnter second date(dd/mm/yy)\n";
                    cin>>d2;
                    d=d1-d2;
                    cout<<"\n\nNo. of days are:\n"<<d;
                    break;
            case 3:exit(0);
            default:cout<<"\ninvalid choice";
        }
    }
    return 0;
}
