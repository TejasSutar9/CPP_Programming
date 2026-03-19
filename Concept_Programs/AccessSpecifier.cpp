#include<iostream>
using namespace std;

class Base       //12
{
    public:
        int i;
    private:                     
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;j = 20;k = 30;
        }
        void fun()
        {
            cout<<i<<"\n";             //Allowed 
            cout<<j<<"\n";             //Allowed 
            cout<<k<<"\n";             //Allowed 
        }
        
};

class Derived : public Base          //16
{
    public:
        int x;                       //4

        void display()
        {
            cout<<i<<"\n";          //Allowed 
            cout<<j<<"\n";          //ERROR      NA
            cout<<k<<"\n";          //Allowed 
        }
};

int main()
{
    Base bobj;              //parent
    Derived dobj;           //child

    cout<<bobj.i<<"\n";         //Allowed 
    cout<<bobj.j<<"\n";         //ERROR       NA
    cout<<bobj.k<<"\n";         //ERROR       NA
    

    cout<<dobj.i<<"\n";         //Allowed 
    cout<<dobj.j<<"\n";         //ERROR       NA
    cout<<dobj.k<<"\n";         //ERROR       NA

    dobj.fun();                 //Allowed 
    dobj.display();             //Allowed 

    return 0;
}