#include <iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iCnt = 0,LastOccurance = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            LastOccurance = iCnt;
        }
    }

    return LastOccurance;
}

int main()
{

    int iSize = 0;
    int iCnt = 0;
    int iNo = 0;
    int *iArr = NULL;
    int Ret = 0;

    // For Integer
    // cout << "Enter how many elements you want : \n";
    // cin>>iSize;

    // iArr = new int[iSize];

    // cout<<"Enter the integers : \n";
    // for(iCnt = 0; iCnt < iSize; iCnt++)
    // {
    //     cin>>iArr[iCnt];
    // }

    // cout<<"Enter the element to chech first occurance : \n";
    // cin>>iNo;

    // Ret = Frequency(iArr,iSize,iNo);
    // if(Ret == -1)
    // {
    //     cout<<"Element not fount";
    // }
    // else
    // {
    //     cout<<"First occurence of the element is : " << Ret  <<"\n";
    // }

    // delete[] iArr;

    // For Character
    char *cArr = NULL;
    char ch;

    cout << "Enter how many characters you want : \n";
    cin >> iSize;

    cArr = new char[iSize];

    cout << "Enter the characters : \n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> cArr[iCnt];
    }

    cout << "Enter the character to check Last occurrence : \n";
    cin >> ch;

    Ret = SearchLast(cArr, iSize, ch);
    if (Ret == 0)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Last occurrence of the character is : " << Ret << "\n";
    }

    delete[] cArr;

    return 0;
}