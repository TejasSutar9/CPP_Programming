#include<iostream>
#include<string.h>

using namespace std;

void Display()
{
    static int iCnt = 5;

    if(iCnt < 1)   
    {
        return;
    }

    cout << iCnt << "\t";
    iCnt--;

    Display();
}


int main()
{
    Display();

    return 0;
}