#include<iostream>
#include<cstdlib>
using namespace std;
template <class t>
class queue
{
    t s[10];
    int rear,front,n;
    public:
        queue()
        {
            rear=0;
            front=0;
            n=0;
        }
        void insert(t ele)
        {
            if(((rear+1)%10)!=front)
                {
                    rear=(rear+1)%10;
                    s[rear]=ele;
                    n++;
                }
            else
                {
                    cout<<"queue is full\n";
                }
        }
        void remove()
        {
            if(n==0)
                {
                    cout<<"queue is empty\n";
                    return;
                }
            else
                {
                    cout<<"\n removed element is "<<s[front+1];
                    front=(front+1)%10;
                    n--;
                }
        }

    void que_operation();
    void display();
};

template<class t>
void queue <t>::display()

{
    if(n>0)
        {
            cout<<"\nqueue content is :\n";
            for(int i=(front+1)%10;;i=(i+1)%10)
                {
                    cout<<s[i]<<"\t";
                    if(i==rear)
                    break;
                }
        }
    else
            cout<<"\nqueue is emptyd\n";
}

template<class t>
void queue <t>::que_operation()
{
    int choice,i;
    t ele;
    while(1)
        {
            cout<<"\n1.insert\n2.delete\n3.exit\n";
            cin>>choice;
            switch(choice)
            {
                case 1:cout<<"\nenter the element to be inserted\n";
                cin>>ele;
                insert(ele);
                display();
                break;
                case 2:remove();
                display();
                break;
                case 3:return;
                default:cout<<"invalid input\n";
            }
        }
}

int main()
{
    cout<<"queue operation using template\n";
    cout<<"integer operation\n";
    queue<int>que1;
    cout<<"float operation\n";
    queue<float>que2;
    int ch;
    while(1)
        {
            cout<<"1.int queue\n2.float queue\n3.exit\n";
            cout<<"enter your choice\n";
            cin>>ch;
            switch(ch)
            {
                case 1:que1.que_operation();
                break;
                case 2:que2.que_operation();
                break;
                case 3:exit(0);
                default:cout<<"invalid input\n";
            }
        }
    return 0;
}
