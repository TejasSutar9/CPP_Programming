#include <iostream>
using namespace std;

template <class T>
T SecondMin(T *Arr, int Size)
{
    int iCnt = 0;
    T FirstSmall;
    T SecondSmall;

    if(Arr[0] < Arr[1])
    {
        FirstSmall = Arr[0];
        SecondSmall = Arr[1];
    }
    else
    {
        FirstSmall = Arr[1];
        SecondSmall = Arr[0];
    }

    for (iCnt = 2; iCnt < Size; iCnt++)
    {
        if (Arr[iCnt] < FirstSmall)
        {
            SecondSmall = FirstSmall;
            FirstSmall = Arr[iCnt];
        }
        else if (Arr[iCnt] > FirstSmall && Arr[iCnt] < SecondSmall)
        {
            SecondSmall = Arr[iCnt];
        }
    }

    return SecondSmall;
};

int main()
{
    int iRet = 0;
    int iSize = 0;
    int iCnt = 0;
    int *iArr = NULL;

    cout << "Enter how many elements you want : \n";
    cin >> iSize;

    cout << "Enter the elements : \n";

    iArr = new int[iSize];
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> iArr[iCnt];
    }

    iRet = SecondMin(iArr, iSize);

    cout << "Second smallest element is : " << iRet;

    delete[] iArr;

    return 0;
}