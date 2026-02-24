#include <iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T Max = arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > Max)
        {
            Max = arr[iCnt];
        }
    }

    return Max;
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

    iRet = Max(iArr,iSize);
    cout<<"Maximum elements is : "<<iRet;

    
    return 0;
}