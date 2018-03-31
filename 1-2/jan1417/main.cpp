#include <iostream>
using namespace std;
class Person
{
    private:
    char name[25];
    int age;
    public:
        void getdata();
        void displaydata();
};
void Person::displaydata()
{
    cout << "name "<< name<<endl;
    cout <<"age"<<age<<endl;
}
void Person ::getdata()
{
    cout <<"enter name\n";
    cin >>name;
    cout <<"enter age\n:";
    cin>>age;
}

int main()
{
    Person p1;
    p1.getdata();
    p1.displaydata();
    return 0;
}
