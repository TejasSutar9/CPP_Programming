#include<iostream>
using namespace std;

class Base                //8
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside base fun\n";
        }
};

class Derived : public Base     //12
{
    public:
        int x;                  //4
        void gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

int main()
{
    Base bobj;              //parent
    Derived dobj;           //child

    dobj.fun();
    dobj.gun();


    return 0;
}