// Input : 5
// Output : 5*4*3*2*1 = 120

#include<iostream>
using namespace std;

int iFact = 1;

void Factorial(int iNo)
{
    if(iNo >= 1)
    {
        iFact = iFact * iNo;
       
        Factorial(--iNo);        // pre Decrement 
    }
}

int main()
{
    Factorial(5);

    cout << "Factorial is : " << iFact << "\n";

    return 0;
}