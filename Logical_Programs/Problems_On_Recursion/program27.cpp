#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        cout << iCnt << "\t";
        iCnt++;
        Display(iNo);
    }

    cout << "\n";
}

int main()
{
    int iValue = 0;

    cout << "Enter the nnumber : \n";
    cin >> iValue;

    Display(iValue);

    return 0;
}