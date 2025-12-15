#include<iostream>

using namespace std;

void Display(int iNo)
{
    static char ch = 'A';

    if(ch > ('A' + iNo - 1))
    {
        return;
    }

    cout<<ch<<"\t";
    ch++;

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