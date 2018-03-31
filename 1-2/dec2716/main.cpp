#include <iostream>
using namespace std;
#include <cstring>
class employee
{
    char name[80];
public:
    void putname(char *n);
    void getname(char *n);
private:
    double wage;
    public void putwage(double w);
    double getwage();
;
void employee::putname(char *n)
{
    strcpy(name ,n);
}
void employee :: getname(char *n)
{
    strcpy(n,name);
}
void employee:: putwage(double w)
{
    wage=w;
}
void employee:: getwage()
{
    return w;
}
int main()
{
    employee sinhaji;
    char name[80];
    sinhaji.putname("uttam sinha");
    sinhaji.putwage(12334);
    sinhaji.getname(name);
    cout << name << "makes $";
    cout << sinhaji.getwage() << " per year ";
    return 0;

}
