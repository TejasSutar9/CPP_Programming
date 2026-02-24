#include <iostream>
using namespace std;

template <class T>
T SecondMax(T *Arr, int Size)
{
    int iCnt = 0;
    T FirstLargest = Arr[0];
    T SecondLargest = -1;

    for (iCnt = 0; iCnt < Size; iCnt++)
    {
        if (Arr[iCnt] > FirstLargest)
        {
            SecondLargest = FirstLargest;
            FirstLargest = Arr[iCnt];
        }
        else if (Arr[iCnt] < FirstLargest && Arr[iCnt] > SecondLargest)
        {
            SecondLargest = Arr[iCnt];
        }
    }

    return SecondLargest;
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

    iRet = SecondMax(iArr, iSize);

    cout << "Second largest element is : " << iRet;

    delete[] iArr;

    return 0;
}