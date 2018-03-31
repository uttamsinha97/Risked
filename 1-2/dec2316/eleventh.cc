#include <iostream>
using namespace std;
class myclass//standard definition of the class
{
    int a,b;
public:
    void init(int i,int j);
    void show();
};
inline void myclass:: init(int i, int j) //inline fucntion
{
    a=i;
    b=j;
}
inline void myclass::show()//function for showing the data
{
    cout << a << "  " << b << "\n";
}
int main()
{
    myclass x;
    x.init(10,20);
    x.show();
    return 0;
}
