#include <iostream>
using namespace std;
template<class type1,class type2>
void myfun(type1 x , type2 y)
{
    cout << x << ' ' << y << '\n';
}
int main()
{
    myfun(10, "say no to coding :D\n\n");
    myfun(98.6,19L);
    return 0;
}
