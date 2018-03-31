#include <iostream>
using namespace std;
int main()
{
    int r,s,l,b,bs,h,r1,choice;
    cout << "1 area of circle\n";
    cout << "2 area of square\n";
    cout << "3 area of rectangle\n";
    cout << "4 area of triangle\n";
    cout << "5 area of semicircle\n";
    cout << "enter choice\n\n";
    cin >> choice;
    switch(choice)
    {
        case 1:
        cout << "enter radius of circle\n\n";
        cin>>r;
        cout << "area of circle is  "<<3.14*r*r<<"\n\n";
        break;
        case 2:
        cout << "enter side of square\n\n";
        cin>>s;
        cout << "area of square is  "<<s*s<<"\n\n";
        break;
        case 3:
        cout << "enter length and breadth of rectangle\n\n";
        cin>>l>>b;
        cout << "area of rectangle is  "<<l*b<<"\n\n";
        break;
        case 4:
        cout << "enter length and breadth of traingle\n\n";
        cin >> bs;
        cin >>h;
        cout << "area of triangle is  "<<0.5*bs*h<<"\n\n";
        break;
        case 5:
        cout << "enter radius of semi circle\n\n";
        cin >>r1;
        cout << "area of semi circle is  "<<3.14*r1*r1*0.5<<"\n\n";
        break;
    }
    return 0;
}
