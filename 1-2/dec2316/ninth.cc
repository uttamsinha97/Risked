#include <iostream>
using namespace std;
const int idle =0;
const int inuse=1;
class c2;
class c1
{
    int status;
public:
    void setstatus(int state);
    friend int idle(c1 a , c2 b);
};
class c2
{
    int status;
public:
    void setstatus(int state);
    friend int idle(c1 a , c2 b);
};
void c1::setstatus(int state)
{
    status=state;
}
void c2 ::setstatus(int state)
{
    status=state;
}
int idle(c1 a , c2 b)
{
    if(a.status ||b.status)
        return 0;
    else return 1;
}
int main()
{
    int main() { C1 x; C2 y;
x.set_status(idle);
y.set_status(inuse);
if(idle(x, y)) cout << "Screen can be used.\n"; else cout << "In use.\n";
x.set_status(inuse);
if(idle(x, y)) cout << "Screen can be used.\n"; else cout << "In use.\n";
return 0;
}
}
