#include<iostream>
using namespace std;

template<class T>
T SumOdd(T *arr, int Size)
{
    T Sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(arr[iCnt] % 2 != 0)
        {
            Sum = Sum + arr[iCnt];
        }
    }

    return Sum;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *Arr = NULL;

    cout<<"Enter how many elements you want : \n";
    cin>>iSize;

    Arr = new int [iSize];

    cout<<"Enter the elements :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    iRet = SumOdd(Arr,iSize);

    cout<<"Sum of all Odd elements in array is : "<<iRet;
    


    return 0;
}