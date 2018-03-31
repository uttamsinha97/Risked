#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
class employee
{
protected:
    char name[80];
public:
    void putname(char *n);
    void getname(char *n);
private:
    double wage;
public:
        void putwage(double w);
        double getwage();
};
void employee:: putname(char *n)
{
    strcpy(name,n);
}
void employee :: getname(char *n)
{
    strcpy(n,name);
}
void employee :: putwage(double w)
{
    wage=w;
}
double employee :: getwage()
{
    return wage;
}
int main()
{
    employee uttam;
    char name[80];
    uttam.putname("uttam sinha");
    uttam.putwage(123456);
    uttam.getname(name);
    cout << name << " makes $ ";
    cout << uttam.getwage () << " per year \n\n";
    return 0;
}
