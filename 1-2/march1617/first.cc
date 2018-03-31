#include<iostream>
using namespace std;
template<class T>
void fun(T a)
{
    cout <<"the main template function :"<<a <<endl;
}
template<>
void fun(int a)
{
    cout<<"specialized template for int type\n"<<a<<endl;
}
int main()
{
    fun<char>('a');
    fun<int>(10);
    fun<float>(12.34);
    return 0;
}
