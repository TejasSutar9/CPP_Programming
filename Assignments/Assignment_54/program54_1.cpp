#include<iostream>
using namespace std;

template<class T>
bool Search(T *arr, int Size, T value)
{
    bool isAvailable = false;
    int iCnt = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            isAvailable = true;
        }
    }

    return isAvailable;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;
    int *Arr = NULL;

    cout<<"Enter how many elements you want : \n";
    cin>>iSize;

    Arr = new int [iSize];

    cout<<"Enter the elements :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Enter the element you want to search : \n";
    cin>>iValue;
    
    bRet = Search(Arr,iSize,iValue);
    if(bRet == true)
    {
        cout<<"Element is present in array \n";
    }
    else
    {
        cout<<"Element is not present in array \n";
    }


    return 0;
}