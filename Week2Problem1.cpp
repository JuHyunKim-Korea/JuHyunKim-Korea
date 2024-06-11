#include <iostream>
using namespace std;

int main()
{
    int num,den,quot,rem;
    //Initialize variables of number, denominator, quotation, remainder
    cout<<"Enter numerator: ";
    //Print "Enter numerator:" 
    cin>>num;
    //Input the variable of number
    cout<<"Enter denominator: ";
    //Print "Enter denominator: "
    cin>>den;
    //Input the variable of the denominator
    quot=num/den;
    //Quotation equals numerator over denominator
    rem=num%den;
    //Remainder equals MOD number over denominator

    if (den==0) {
        //if the denominator equals 0
        cout<<"Denominator is 0"<<endl;
        //Print "Denominator is 0"
    }
    else {
        cout<<"Quotient: "<<quot<<endl; 
        //Print "Quotient " with the quotient variable inputted
        cout<<"Remainder: "<<rem<<endl;
        //Print "Remainder" with the remainder variable inputted
    }
    
    return 0;
}