#include <iostream>
using namespace std;
class myclass
{
    int a,b;
public:
    myclass(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout << a << "\n\n" << b;
    }
};
int main()
{
    myclass ob(3,5);
    ob.show();
    return 0;
}
