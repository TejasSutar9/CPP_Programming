// Input : 5
// Output : 5+4+3+2+1 = 15

#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iSum = 0;
    int i = 0;

    i = 1;

    while(i <= iNo)
    {
        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Addition(5);

    cout << "Addition is : " << iRet << "\n";

    return 0;
}