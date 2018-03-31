#include <iostream>
#include<stdlib.h>
using namespace std;

class Volume
{
    int a,l,b,h,r;
    float vol;
    static int count;
    public:
            Volume()
            {
                count ++;
                cout<<"\nobject created\n"<<count;
            }
              Volume(float i)
            {

                a=i;
                r=i;
                 count ++;
                cout<<"\nobject created by sp\n"<<count;

            }
             Volume(float i,int j)
            {

                r=i;
                h=j;

                  count ++;
                cout<<"\nobject created by dp\n"<<count;
            }
            Volume(float i,float j,float k)
            {

                l=i;
                b=j;
                h=k;
                 count ++;
                cout<<"\nobject created\n"<<count;

            }
         /*   Volume(Volume &x)
            {
                count ++;
                cout<<"\nobject created\n"<<count;
            } */


        ~Volume()
        {
             count --;
                cout<<"\nobject removed\n"<<count;
        }

       void display()
       {
           cout<<"\nvolume="<<vol;
       }
        friend  void compute(Volume &v,int ch);
};

int Volume::count=0;
void compute(Volume &v,int ch)
{

    int a,l,b,h,r;
switch(ch)
{

    case 1 :v.vol=v.a*v.a*v.a;
              break;
    case 2 : v.vol=v.l*v.b*v.h;
              break;
    case 3 : v.vol= float(4/3)*3.14*v.r*v.r;
                break;
    case 4 :v.vol = float(4/3)*3.14*v.r*v.r*v.h;
              break;
    case 5 : exit(0);
    default : cout<<"invalid \n";

}

}

int main()
{
    Volume v;
    int l,b,h,ch,a,i;
    while(1)
    {
       cout<<"\n1.cube\n2.cuboid\n3.sphere\n4.cone\n5.exit\n\n";
       cout<<"\nenter your choice\n";
       cin>>ch;
    if(ch==1)
    {
         cout<<"enter the side :";
               cin>>l;
               Volume cube(l);
               compute(cube,ch);
               cube.display();
    }
    if(ch==2)
    {
       cout<<"enter the length,breadth and height :";
              cin>>l;
              cin>>b;
              cin>>h;
              Volume cuboid(l,b,h);
              compute(cuboid,ch);
              cuboid.display();
    }
     if(ch==3)
   {


  cout<<"enter the radius :";
                cin>>l;
                Volume sphere(l);
                compute(sphere,ch);
                sphere.display();
   }
   if(ch==4)
   {
    cout<<"enter radius and height :";
               cin>>l>>b;
               Volume cone(l,b);
               compute(cone,ch);
               cone.display();
   }
    if(ch==5)
   {
    exit(0);
   }
   }
     return 0;
       }
