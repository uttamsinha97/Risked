#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "enter the operator + - * / \n\n";
    cin >> op;
    cout << "enter the two operands\n\n";
    cin >> a >> b;
    switch(op)
    {
        case '+' : cout << a+b;
        break;
        case '-' : cout << a-b;
        break;
        case '*' : cout << a*b;
        break;
        case '/' : cout << a/b;
        break;
        default : "incorrect operator\n\n";
    }
    return 0;
}
