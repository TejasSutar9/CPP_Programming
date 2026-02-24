#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int Size)
{
    T Smallest = arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(arr[iCnt] < Smallest)
        {
            Smallest = arr[iCnt];
        }
    }

    return Smallest;
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
    
    iRet = Min(Arr,iSize);

    cout<<"Smallest element in array is : "<<iRet;
    


    return 0;
}