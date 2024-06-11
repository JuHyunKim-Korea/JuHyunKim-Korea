#include <iostream>
using namespace std;

int year, month, date;

int main ()
{
    cout<<"Enter Year: ";
    cin>>year;
    cout<<"Enter Month: ";
    cin>>month;
    cout<<"Enter Date: ";
    cin>>date;
    cout<<"Birthdate is "<<year<<"/"<<month<<"/"<<date<<"(yyyy/mm/dd)"<<endl;
    return 0;
}