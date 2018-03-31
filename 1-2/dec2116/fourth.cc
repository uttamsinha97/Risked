#include <iostream>
using namespace std;
#define sizee 10
class stackkk
{
    int stckk[sizee];
    int tos;
public:
    stackkk(); //constructor
    ~stackkk();//destructor
    void push(int i);
    int pop();
};
// class constructor
stackkk :: stackkk()
{
    tos=0;
    cout << "stack initialised \n\n";
}
stackkk :: ~ stackkk()
{
    cout << "\n\nstack DESTROYED\n\n ";
}

void stackkk::push(int i)
{
    if(tos==sizee)
    {
        cout << "stack is full\n\n";
        return;
    }
    stckk[tos]=i;
    tos++;
}
int stackkk::pop()
{
    if(tos==0)
    {
        cout << "stack underflow\n\n";
        return 11;
    }
    tos--;
    return stckk[tos];
}
int main()
{
    stackkk stack1,stack2;

    stack1.push(1);
    stack2.push(2);
    stack1.push(3);
    stack2.push(4);

    cout << stack1.pop() << " ";
    cout << stack1.pop() << " \n";
    cout << stack2.pop() << " ";
    cout << stack2.pop() << " ";
    return 69;
}
