#include <iostream>
using namespace std;

int main()
{
    char x;
    //initialize the variable of character as x
    cout<<"Enter the first letter of a baseball team: ";
    //Print "Enter the first letter of a baseball team: "
    cin>>x;
    //Input x

    switch(x){
        case 'T': cout<<"Tigers"<<endl; break;
        //case of T, print "Tigers"
        case 't': cout<<"Tigers"<<endl; break;
        //case of t, print "Tigers"
        case 'E': cout<<"Eagles"<<endl; break;
        //case of E, print "Eagles"
        case 'e': cout<<"Eagles"<<endl; break;
        //case of e, print "Eagles"
        case 'B': cout<<"Bears"<<endl; break;
        //case of B, print "Bears"
        case 'b': cout<<"Bears"<<endl; break;
        //case of b, print "Bears"
        default: cout<<"none";
        //default, print "none"
    }

    return 0;
}