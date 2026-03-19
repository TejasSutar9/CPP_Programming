#include<iostream>
using namespace std;

class Base              //parent class
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside Base fun";
        }
        void gun()
        {
            cout<<"Inside Base gun";
        }
        void sun()
        {
            cout<<"Inside Base sun";
        }
        void bun()
        {
            cout<<"Inside Base bun";
        }
};

class Derived : public Base
{
    public: 
    int x;
    void gun()
    {
        cout<<"Inside Derived gun";
    }
    void sun()
    {
        cout<<"Inside Derived sun";
    }
    void run()
    {
        cout<<"Inside Derived run";
    }
    void mun()
    {
        cout<<"Inside Derived mun";
    }
};

int main()
{
    Base *bp1 = new Base();             //No casting 
    Derived *dp1 = new Derived();       //No casting
    Base *bp2 = new Derived();          //Upcasting
    Derived *dp2 = new Base();          //Downcasting      ERROR  

    return 0;
}