#include <iostream>
using namespace std;

template<class T>
void Display(T iValue, int iSize)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << iValue << "\t";
    }
    cout<<"\n";
}

int main()
{
    char ch = '\0';
    int iSize,iNo;
    float fNo;

    cout << "Enter character and count : \n";
    cin >> ch >> iSize;
    Display(ch,iSize);


    cout << "Enter Integer and count : \n";
    cin >> iNo >> iSize;
    Display(iNo,iSize);


    cout << "Enter Float and count : \n";
    cin >> fNo >> iSize;
    Display(fNo,iSize);

    return 0;
}