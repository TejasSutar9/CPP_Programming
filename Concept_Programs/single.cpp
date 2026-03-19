#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside base fun\n";
        }
};

class Derived : public Base
{
    public:
        int x;
        void gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of Base Class Object : "<<sizeof(bobj)<<"\n";
    cout<<"Size of Derived Class Object : "<<sizeof(dobj)<<"\n";


    return 0;
}