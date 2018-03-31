#include <iostream>
using namespace std;
#define size 100
class stack{
int stck[size];
int tos;
public:
    void init();
    void push(int i);
    int pop();
    };
    void stack::init()
    {
        tos=0;
    }
    void stack::push(int i)
    {
        if(tos==size)
        {
            cout << "stack is full\n";
            return;
        }
        stck[tos]=i;
        tos++;
    }
    int stack :: pop()
    {
        if(tos==0){
            cout << "stack underflow\n";
            return 0;
        }
        tos--;
        return stck[tos];
    }
    int main()
    {
        stack stack1,stack2;
        stack1.init();
        stack2.init();
        stack1.push(1);
        stack2.push(2);
        stack1.push(3);
        stack2.push(4);
        cout << stack1.pop() << " ";
        cout << stack2.pop() << " ";
        cout << stack1.pop() << " ";
        cout << stack2.pop() << " \n\n";
        return 0;
    }
