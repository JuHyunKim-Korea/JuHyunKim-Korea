#include <iostream>
using namespace std;

double C,F;
int main()
{
    cout<<"Enter Farenheit: ";
    cin>>F;

    C=(F-32)*5/9;
    cout<<"C= "<<C<<endl;

    return 0;

}