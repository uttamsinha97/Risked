#include <iostream>
#include <cstdlib>
using namespace std;
class COMPLEX
{
    float real;
    float image;
public :
    COMPLEX()
    {
        real=0;
        image=0;
    }
    COMPLEX(float a, float b)
    {
        real=a;
        image=b;
    }
    COMPLEX(COMPLEX &x)
    {
        real=x.real;
        image=x.image;
    }
friend COMPLEX ADD(int ,COMPLEX);
friend COMPLEX ADD(COMPLEX,COMPLEX);
void display(void)
{
cout<<real<<"+i"<<image;
}
};
COMPLEX ADD(int a,COMPLEX s2)
{
COMPLEX temp;
temp.real=a+s2.real;
temp.image=s2.image;
return temp;
}
COMPLEX ADD(COMPLEX s1,COMPLEX s2)
{
s1.real=s1.real+s2.real;
s1.image=s1.image+s2.image;
return s1;
}
main()
{
COMPLEX c1,c5,c6;
COMPLEX c2(10,20);
COMPLEX c3(5,4);
COMPLEX c4(2,3);
COMPLEX c7(c2);
int a;
int choice;
for(;;)
{
cout<<"\n\nenter 1:add(a,s2)  2:add(s1,s2) \n";
cin>>choice;
switch(choice)
{
case 1: cout<<"enter the integer"<<endl;
cin>>a;
cout<<"complex s2:";
c2.display();
c5=ADD(a,c2);
cout<<"\nanswer:";
c5.display();
break;
case 2: cout<<"\ncomplex s1:";
c3.display();
cout<<"\ncomplex s2:";
c4.display();
c6=ADD(c3,c4);
cout<<"\nanswer:";
c6.display();
default:exit(0);
}
}
}
