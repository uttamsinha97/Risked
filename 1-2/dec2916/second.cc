#include <iostream>
using namespace std;
class test
{
public:
    int x,y;
    float res;
    void first()
    {
        cout << "enter the first number\n\n";
    }

    void second()
    {
        cout << "enter the second number\n\n";
    }
    int add()
    {
        res=x+y;
        cout << res;
    }
    int sub()
    {
        res=x-y;
        cout << res;
    }
    int mul()
    {
        res=x*y;
        cout << res;
    }
    int div()
    {
        res=x/y;
        cout << res;
    }
};
int main()
{
    test z;
    int choice;
    cout <<"1 add   2 sub   3 mul   4 div\n\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        z.first();
        cin>>z.x;
        z.second();
        cin>>z.y;
        z.add();
        break;

    case 2:
        z.first();
        cin>>z.x;
        z.second();
        cin>>z.y;
        z.sub();
        break;

    case 3:
        z.first();
        cin>>z.x;
        z.second();
        cin>>z.y;
        z.mul();
        break;

    case 4:
        z.first();
        cin>>z.x;
        z.second();
        cin>>z.y;
        z.div();
        break;
    }
    return 0;

}
