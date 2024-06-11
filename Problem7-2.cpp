#include <iostream>
using namespace std;

int main()
{
    char chLower, chUpper;
    int ascii;
    cout<<"upper case: ";
    cin>>chUpper;
    ascii=chUpper;
    ascii=ascii+32;
    chLower=ascii;
    cout<<"lower case: "<<chLower<<endl;


    return 0;
}