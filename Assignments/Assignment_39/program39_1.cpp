#include<iostream>

using namespace std;

void Display()
{
    static int iCnt = 1;

    if(iCnt > 5)   // base condition
    {
        return;
    }

    cout<<"*\t";
    iCnt++;

    Display();
}


int main()
{
    Display();

    return 0;
}