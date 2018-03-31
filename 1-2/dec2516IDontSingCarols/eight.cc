#include <iostream> // doubt
using namespace std;
class number
{
protected :
    int val;
public:
    void setval(int i)
    {
        val=i;
    }
    virtual void show()=0; // a pure virtual function
};
class hextype : public number
{
public:
    void show()
    {
        cout << hex << val << "\n";
        cout << "hexadecimal\n\n";
    }
};
class dectype :public number
{
public:
    void show()
    {
        cout << oct << val << "\n";
        cout << "dec type\n\n";
    }
};
class octype : public number
{
public:
    void show()
    {
        cout << oct << val << "\n";
        cout << "octal type\n\n";
    }
};
int main()
{
    dectype d;
    hextype h;
    octype o;
    d.setval(100);
    d.show();
    h.setval(100);
    h.show();
    o.setval(100);
    o.show();
    return 0;

}
