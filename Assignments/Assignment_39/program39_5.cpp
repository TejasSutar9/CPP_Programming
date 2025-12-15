#include<iostream>
#include<string.h>

using namespace std;

void Display()
{
    static char ch = 'a';

    if(ch > 'f')   // base condition
    {
        return;
    }

    cout << ch << "\t";
    ch++;

    Display();
}

int main()
{
    Display();

    return 0;
}