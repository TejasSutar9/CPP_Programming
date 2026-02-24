#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d)
{
    T max = a;

    if(b > max)
        max = b;
    if(c > max)
        max = c;
    if(d > max)
        max = d;

    return max;
}

int main()
{
    int iRet = Max(10, 50, 30, 20);
    cout << "Maximum is : " << iRet << endl;

    double dRet = Max(10.5, 20.3, 5.6, 18.9);
    cout << "Maximum is : " << dRet << endl;

    return 0;
}