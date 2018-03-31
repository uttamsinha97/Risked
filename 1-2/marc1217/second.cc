#include <iostream>
using namespace std;
class complex1
{
private:
    float real ,imag;
public:
    void display(complex1);
    friend complex1 add(float,complex1);
    friend complex1 add(complex1,complex1);
    void getdata()
    {
        cout<<"enter real and imaginary part\n";
        cin>>real>>imag;
    }
};
complex1 add(float a,complex1 s1)
{
    s1.real=a+s1.real;
    return (s1);
}
complex1 add(complex1 s1, complex1 s2)
{

    s1.real=s1.real+s2.real;
    s1.imag=s1.imag+s2.imag;
    return (s1);
}
void complex1 ::display(complex1 s1)
{
     cout<<"\n"<<"sum="<<s1.real<<"+i"<<s1.imag<<"\n";
}
int main()
{
    int choice;
    float a;
    complex1 s1,s2,s3;
    cout<<"enter 1 for adding integer to complex number\nenter 2 for adding complex to complex\n\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"enter the integer \n";
        cin >>a;
        s1.getdata();
        s3=add(a,s1);
        s3.display(s3);
        break;

        case 2:
            s1.getdata();
            s2.getdata();
            s3=add(s1,s2);
            s3.display(s3);
            break;

        default:cout<<"invalid choice\n";

    }

}
