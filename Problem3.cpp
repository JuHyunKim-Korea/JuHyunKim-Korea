#include <iostream>
using namespace std;

int a, b, c, d;

int main()
{
    cout<<"Enter length: ";
    cin>>a;
    cout<<"Enter width: ";
    cin>>b;
    c=a+b+a+b;
    cout<<"Perimeter of rectangle is "<<c<<endl;
    d=a*b;
    cout<<"Area of redctangle is "<<d<<endl;
    
    return 0;
}