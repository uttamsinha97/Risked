#include <iostream>
using namespace std;
class box
{public:
    int l;
    int b;
    int h;
};
int main()
{
    box b1, b2;
    b1.l=1;
    b1.b=2;
    b1.h=3;
    b2.l=4;
    b2.b=5;
    b2.h=6;
    cout << "volume of the first box is " <<b1.l*b1.b*b1.h<< "\n\n";
    cout << "volume of second box is  " <<b2.l*b2.b*b2.h<<"\n\n";
    return 0;
}
