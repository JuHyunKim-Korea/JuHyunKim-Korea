#include <iostream>
using namespace std;

int main()
{
    int r(r>=0 && r<=9);
    //initialize the first number of resident registration number as r
    cout<<"Enter first number in your resident registration number: ";
    //Print "Enter first number in your resident registration number: "
    cin>>r;
    //Input the variable of the first number of resident registration number 

    if (r==1||r==3||r==9){
    //if the variable of the first number of resdient registration number equals 1 or 3 or 9
        cout<<"Male"<<endl;
        //Print "Male"
    }
    else if (r==0||r==2||r==4){
    //if the variable of the first number of resdient registration number equals 0 or 2 or 4
        cout<<"Female"<<endl;
        //Print "Female"
    }
    else if (r>=5 && r<=8){
    //if the variable of the first number of resdient registration number is equal or greater than 5 and less or equal than 8
        cout<<"Foreigner"<<endl;
        //Print "Foreigner"
    }

return 0;
}