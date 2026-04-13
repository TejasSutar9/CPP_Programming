#include<iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double i = 0.0, j = 0.0;
    double Ret = 0.0;

    cout<<"Enter first numbre : \n";
    cin>>i;

    cout<<"Enter second numbre : \n";
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}