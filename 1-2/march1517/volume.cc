#include<iostream>
using namespace std;
class volume
{
    float r,a,l,b,h;
    static int count;
    float vol;
    public:
    friend void compute(volume &v,int ch); //fucntiondec in class
        volume() //constructor
        {
            count++;
            cout<<"\nObject created by default constructor: "<<count;
        }
        volume(float i)
        {
            a=i;
            r=i;
            count++;
            cout<<"\nObject created by single parameterized constructor: "<<count;
        }
        volume (float i,float j)
        {
            r=i;
            h=j;
            count++;
            cout<<"\nObject created by double parameterized constructor: "<<count;
        }
        volume (float i,float j,float k)
        {
            l=i;
            b=j;
            h=k;
            count++;
            cout<<"\nObject created by triple parameterized constructor "<<count;
        }
        ~volume()//destructor
        {
            count--;
            cout<<"\nRemaining object: "<<count;
        }
        void display()
        {
            cout<<"\nVolume=\n"<<vol;
        }
};
int volume::count;
int main()
{
    int ch;
    int l,b,h;
    do
    {
        cout<<endl;
        cout<<"1.Cube\n2.Cuboid\n3.Sphere\n4.Cone\n5.Exit\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        if(ch==1)
            {
                cout<<"Enter the edge length of the cube\n";
                cin>>l;
                volume cube(l);
                compute(cube,ch);
                cube.display();
            }
        if(ch==2)
            {
                cout<<"Enter the length ,breadth and height of the cuboid\n";
                cin>>l>>b>>h;
                volume cuboid(l,b,h);
                compute(cuboid,ch);
                cuboid.display();
            }
        if(ch==3)
            {
                cout<<"Enter the radius of the sphere\n";
                cin>>l;
                volume sphere(l);
                compute(sphere,ch);
                sphere.display();
            }
        if(ch==4)
            {
                cout<<"\nEnter the radius and height of the cone\n";
                cin>>l>>h;
                volume cone(l,h);
                compute(cone,ch);
                cone.display();
            }
        }
        while((ch>=1)&&(ch<=4)) ;
return 0;
}
void compute(volume &v,int ch)
{
    switch(ch)
    {
        case 1: v.vol=v.a*v.a*v.a;break;
        case 2: v.vol=v.l*v.b*v.h;break;
        case 3: v.vol=4/3*v.r*v.r*v.r*3.142; break;
        case 4: v.vol=(v.h*v.r*v.r)*1/3; break;
    }
}
