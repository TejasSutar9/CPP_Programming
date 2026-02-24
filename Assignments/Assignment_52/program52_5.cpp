#include <iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    T Min = arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < Min)
        {
            Min = arr[iCnt];
        }
    }

    return Min;
}

int main()
{
    int iRet = 0;
    int iSize = 0;
    int iCnt = 0;
    int *iArr = NULL;

    cout<<"Enter how many elements you want : \n";
    cin>>iSize;

    cout<<"Enter the elements : \n";

    iArr = new int[iSize];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>iArr[iCnt];
    }

    iRet = Min(iArr,iSize);
    cout<<"Minumum elements is : "<<iRet;

    
    return 0;
}