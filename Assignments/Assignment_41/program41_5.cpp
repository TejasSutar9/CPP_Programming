#include<iostream>

using namespace std;

int ProductOfDigits(int iNo)
{
    // Base case: if number becomes 0, return 1
    if (n == 0)
        return 1;

    // Recursive step: last digit * product of remaining digits
    return (n % 10) * ProductOfDigits(n / 10);
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    iRet = ProductOfDigits(iValue);

    cout << "Product of Digits = " << iRet;

    return 0;
}