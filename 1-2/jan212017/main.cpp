#include <iostream>
using namespace std;
int main()
{
    char name[25],usn[10],addr[80];
    int sem;
    cout << "enter the name of student\n\n";
    cin>>name;
    cout << "enter the USN of student\n\n";
    cin>>usn;
    cout<<"enter the semester of student\nkindly enter the semester as in integers\n\n";
    cin>>sem;
    cout<<"enter the address\n\n";
    cin>>addr;
    cout << "***********************************";
    cout << "\nName :" <<name<<"\n";
    cout << "USN  :" <<usn<<"\n";
    cout << "Sem  :" <<sem<<"\n";
    cout << "Address :"<<addr<<"\n";
    cout << "**********************************";
    return 0;


}
