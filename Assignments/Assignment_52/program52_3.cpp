#include <iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    T Sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + arr[iCnt];
    }

    return Sum;
}

int main()
{
    int iRet = 0;
    int iSize = 0;
    int iCnt = 0;
    int *iArr = NULL;

    cout<<"Enter how many elememnts you want : \n";
    cin>>iSize;

    iArr = new int[iSize];
    cout<<"Enter the Elements : \n";

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        cin>>iArr[iCnt];
    }

    iRet = AddN(iArr,iSize);
    cout<<"Sum of the elements is : "<<iRet;

    
    return 0;
}