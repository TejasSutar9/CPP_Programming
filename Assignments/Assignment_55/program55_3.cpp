#include <iostream>
using namespace std;

template <class T>
T Div(T no1, T no2)
{

    if (no2 == 0)
    {
        cout << "Error: Division by zero not allowed\n";
        return 0;
    }

    T result = no1 / no2;
    return result;
}

int main()
{
    int iRet = 0;

    iRet = Div(15, 5);

    cout << "Division is : " << iRet;

    return 0;
}