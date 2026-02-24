#include <iostream>
using namespace std;

template <class T>
bool CheckSorted(T *arr,int iSize)
{
    int iCnt = 0;
    bool isSorted = true;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] <= arr[iCnt + 1])
        {
            isSorted = false;
        }
    }

    return isSorted;

}

int main()
{
    bool bRet = false;
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


    bRet = CheckSorted(iArr,iSize);
    if(bRet == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";
    }

    delete[] iArr;


    return 0;
}