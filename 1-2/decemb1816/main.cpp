#include <iostream>
#include <cstring>
using namespace std;
class employee
{
    char name[80];
public:
    void putname(char *);
    void getname(char *);
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
void employee :: getname(char *n) // function
{
    strcpy(n,name);
}
void employee::putwage(double w) { wage = w; }
void employee ::getwage()
{
    return wage;
}
int main()
{
    employee sinha;
    char name[80];
    sinha.putname("uttam SINHA");
    sinha.putwage(10000000);
    sinha.getname(name);
    cout << name << "makes $ ";
    cout << sinha.getwage() "per year ";
    return 0;
}
