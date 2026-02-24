#include<iostream>
using namespace std;

template<class T>
T Sub(T no1, T no2)
{
    T Substraction = 0;

    Substraction = no1 - no2;

    return Substraction;
}

int main()
{
    int iRet = 0;

    iRet = Sub(15,10);

    cout<<"Substraction is : "<<iRet;
    


    return 0;
}