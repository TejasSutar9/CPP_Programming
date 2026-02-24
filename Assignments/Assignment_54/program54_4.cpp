#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int Size)
{
    int Start = 0;
    int End = Size - 1;
    int temp = 0;

    while (Start < End)
    {
        temp = arr[Start];
        arr[Start] = arr[End];
        arr[End] = temp;

        Start++;
        End--;
    }       
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
    
    Reverse(Arr,iSize);

    cout<<"Inplace reversed arrays elements are : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    
    return 0;
}