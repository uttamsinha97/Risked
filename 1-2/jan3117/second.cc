#include<iostream>
#include<cstdlib>
using namespace std;
class COMPLEX
{
float real;
float image;
public:
COMPLEX()
{
real=0;
image=0;
}
COMPLEX(float a,float b)
{
real=a;
image=b;
}
COMPLEX(COMPLEX &x)
{
real=x.real;
image=x.image;
}
friend COMPLEX SUB(COMPLEX ,COMPLEX);
friend COMPLEX ADD(COMPLEX,COMPLEX);
void display(void)
{
cout<<real<<"+i"<<image;
}
};
COMPLEX SUB(COMPLEX s1,COMPLEX s2)
{
s1.real=s1.real-s2.real;
s1.image=s1.image-s2.image;
return s1;
}
COMPLEX ADD(COMPLEX s1,COMPLEX s2)
{
s2.real=s2.real+s1.real;
s2.image=s2.image+s1.image;
return s2;
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
cout<<"\n\nenter 1:sub(s1,s2)  2:add(s1,s2) \n";
cin>>choice;
switch(choice)
{
case 1: cout<<"complex s1:";
c2.display();
cout<<"complex s2:";
c3.display();
c5=SUB(c2,c3);
cout<<"\nanswer:";
c5.display();
break;
case 2: cout<<"\ncomplex s1:";
c3.display();
cout<<"\ncomplex s2:";
c4.display();
c3=ADD(c3,c4);
cout<<"\nanswer:";
c3.display();
default:exit(0);
}
}
}
