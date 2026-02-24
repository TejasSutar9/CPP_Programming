#include <iostream>
using namespace std;

template<class T>
int Frequency(T *arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    
    int iSize = 0;
    int iNo = 0;
    int *iArr = NULL;
    int Ret = 0;
    
    // For Integer
    cout << "Enter how many elements you want : \n";
    cin>>iSize;

    iArr = new int[iSize];

    cout<<"Enter the integers : \n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>iArr[iCnt];
    }

    cout<<"Enter the element to count frequency : \n";
    cin>>iNo;

    Ret = Frequency(iArr,iSize,iNo);

    cout<<"Frequency of the element is : " << Ret  <<"\n";

    delete[] iArr;


    // For Character
    char *cArr = NULL;
    char ch;

    cout << "Enter how many characters you want : \n";
    cin>>iSize;

    cArr = new char[iSize];

    cout<<"Enter the characters : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>cArr[iCnt];
    }

    cout<<"Enter the character to count frequency : \n";
    cin>>ch;

    Ret = Frequency(cArr,iSize,ch);
    cout<<"Frequency of the character is : " << Ret <<"\n";;
    
    delete[] cArr;


    // For Double
    double * dArr = NULL;
    double dNo = 0.0;
    
    cout << "Enter how many double elements you want: ";
    cin >> iSize;

    dArr = new double[iSize];

    cout << "Enter the double elements: ";
    for(int i = 0; i < iSize; i++)
    {
        cin >> dArr[i];
    }

    cout << "Enter the element to count frequency: ";
    cin >> dNo;

    Ret = Frequency(dArr, iSize, dNo);

    cout << "Frequency of the element is: " << Ret << "\n";

    delete[] dArr;



    return 0;
}