#include <iostream>
using namespace std;
#define sizee 10
class stackk
{
    int stck[sizee];
    int tos;
public:
    void init();
    void push(int i);
    int pop();
};
void stackk::init()
{
    tos=0;
}
void stackk::push(int i)
{
    if(tos==sizee)
    {
        cout << "stack is full\n\n";
        return;
    }
    stck[tos]=i;
    tos++;
}
int stackk::pop()
{
    if(tos==0)
    {
        cout << "stack underflow\n\n";
        return 11;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stackk stack1,stack2;
    stack1.init();
    stack2.init();

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
