#include<iostream>
using namespace std;

template<class T>
T Add(T no1, T no2)
{
    T Addition = 0;

    Addition = no1 + no2;

    return Addition;
}

int main()
{
    int iRet = 0;

    iRet = Add(10,15);

    cout<<"Addition is : "<<iRet;
    


    return 0;
}