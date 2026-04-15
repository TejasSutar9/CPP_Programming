#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        cout << iCnt << "\t";
        iCnt++;
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