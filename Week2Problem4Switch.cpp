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

    switch(r){
        case 0: cout<<"Female"<<endl; break;
        //case of 0, print "Female"
        case 1: cout<<"Male"<<endl; break;
        //case of 1, print "Male"
        case 2: cout<<"Female"<<endl; break;
        //case of 2, print "Female"
        case 3: cout<<"Male"<<endl; break;
        //case of 3, print "Male"
        case 4: cout<<"Female"<<endl; break;
        //case of 4, print "Female"
        case 5: cout<<"Foreigner"<<endl; break;
        //case of 5, print "Foreigner"
        case 6: cout<<"Foreigner"<<endl; break;
        //case of 6, print "Foreigner"
        case 7: cout<<"Foreigner"<<endl; break;
        //case of 7, print "Foreigner"
        case 8: cout<<"Foreigner"<<endl; break;
        //case of 8, print "Foreigner"
        case 9: cout<<"Male"<<endl; break;
        //case of 9, print "Male"
        default: cout<<"None";
        //default, print "None"
    }
return 0;
}