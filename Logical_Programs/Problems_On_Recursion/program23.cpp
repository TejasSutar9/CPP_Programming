// Input : 5
// Output : 5*4*3*2*1 = 120

#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    static int iFact = 1;

    if(iNo >= 1)
    {
        iFact = iFact * iNo;
       
        Factorial(iNo--);        // Post Decrement 
    }

    return iFact;
}

int main()
{
    int iRet = 0;

    iRet = Factorial(5);

    cout << "Factorial is : " << iRet << "\n";

    return 0;
}