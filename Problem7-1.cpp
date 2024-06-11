#include <iostream>
using namespace std;

int main()
{
    char chLower, chUpper;
    int ascii;
    cout<<"lower case: ";
    cin>>chLower;
    ascii=chLower;
    ascii=ascii-32;
    chUpper=ascii;
    cout<<"upper case: "<<chUpper<<endl;


    return 0;
}