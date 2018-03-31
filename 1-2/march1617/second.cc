#include<iostream>
using namespace std;
template<class T>
class Test
{
public:
    Test()
    {
        cout<<"general template object\n";
    }
};
template<>
class Test<int>
{
public:
    Test()
    {
        cout<<"specialized template object\n";
    }
};
int main()
{
    Test<int> a;
    Test<char> b;
    Test<float> c;
    return 0;+
}
