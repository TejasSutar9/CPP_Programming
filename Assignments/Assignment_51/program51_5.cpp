#include <iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;

    cout<<"Reversed elements are : \n";
    for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        cout<<arr[iCnt]<<"\t";
    }

}

int main()
{

    int iSize = 0;
    int iCnt = 0;
    int *iArr = NULL;
    int Ret = 0;

    // For Integer
    cout << "Enter how many elements you want : \n";
    cin>>iSize;

    iArr = new int[iSize];

    cout<<"Enter the integers : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>iArr[iCnt];
    }

    Reverse(iArr,iSize);
   

    delete[] iArr;

    // For Character
    // char *cArr = NULL;
    // char ch;

    // cout << "Enter how many characters you want : \n";
    // cin >> iSize;

    // cArr = new char[iSize];

    // cout << "Enter the characters : \n";
    // for (iCnt = 0; iCnt < iSize; iCnt++)
    // {
    //     cin >> cArr[iCnt];
    // }

    // cout << "Enter the character to check Last occurrence : \n";
    // cin >> ch;

    // Ret = SearchLast(cArr, iSize, ch);
    // if (Ret == 0)
    // {
    //     cout << "Element not found";
    // }
    // else
    // {
    //     cout << "Last occurrence of the character is : " << Ret << "\n";
    // }

    // delete[] cArr;

    return 0;
}