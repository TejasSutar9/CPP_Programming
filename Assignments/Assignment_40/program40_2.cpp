#include<iostream>

using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt > iNo)   // base condition
    {
        return;
    }

    cout<<iCnt<<"\t";
    iCnt++;

    Display(iNo);
}


int main()
{
    int iValue = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}