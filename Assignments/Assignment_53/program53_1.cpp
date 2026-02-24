#include <iostream>
using namespace std;

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }

}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *Src = NULL;
    int *Dest = NULL;

    cout<<"Enter how many elements you want : \n";
    cin>>iSize;

    cout<<"Enter the elements : \n";

    Src = new int[iSize];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Src[iCnt];
    }

    Dest = new int [iSize];

    CopyArray(Src,Dest,iSize);

    cout<<"Copied elements are : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<< Dest[iCnt]<<"\t";
    }
    
    delete[] Src;
    delete[] Dest;

    return 0;
}