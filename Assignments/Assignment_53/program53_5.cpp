#include <iostream>
using namespace std;

template <class T>
void Replace(T *Arr, int Size, T oldVal, T newVal)
{
    int iCnt = 0;
    bool found = false;

    for (iCnt = 0; iCnt < Size; iCnt++)
    {
        if (Arr[iCnt] == oldVal)
        {
            Arr[iCnt] = newVal;
            found = true;
        }
    }

    if (found == true)
    {
        cout << "Updated arrays elements are : \n";
        for (iCnt = 0; iCnt < Size; iCnt++)
        {
            cout << Arr[iCnt] << "\t";
        }
    }
    else
    {
        cout<<"Value not found in array \n";
    }
};

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *iArr = NULL;
    int oldValue = 0;
    int newValue = 0;

    cout << "Enter how many elements you want : \n";
    cin >> iSize;

    cout << "Enter the elements : \n";

    iArr = new int[iSize];
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> iArr[iCnt];
    }

    cout << "What old value you want to replace : \n";
    cin >> oldValue;

    cout << "Enter the new value that you want to replace with old value : \n";
    cin >> newValue;

    Replace(iArr, iSize, oldValue, newValue);

    delete[] iArr;

    return 0;
}