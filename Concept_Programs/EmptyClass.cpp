#include<iostream>
using namespace std;

class Demo
{
    public:
        void display()
        {
            cout<<"Inside Display\n";
        }

};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj);            // 1 byte

    return 0;
}