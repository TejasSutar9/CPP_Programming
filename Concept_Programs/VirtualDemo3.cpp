#include<iostream>
using namespace std;

class Base              //parent class
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
        void gun()
        {
            cout<<"Inside Base gun\n";
        }
        void sun()
        {
            cout<<"Inside Base sun\n";
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
    Base *bp = new Derived();          //Upcasting
  
    bp->fun();          // Base fun
    bp->gun();          // Base gun
    bp->sun();          // Base sun
    // bp->run();          // ERROR
    // bp->mun();          // ERROR
    bp->bun();          //Base bun
  
    return 0;
}