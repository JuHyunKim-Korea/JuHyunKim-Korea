#include <iostream>
using namespace std;

int main()
{
    char ch;
    //initialize the variable of character as ch
    cout<<"Enter the first letter of a baseball team: ";
    //Print "Enter the first letter of a baseball team: "
    cin>>ch;
    //Input the variable of character

if (ch=='T'){
//if the variable of character equals T
        cout<<"Tigers"<<endl;
        //Print "Tigers"
    }
    else if (ch=='t'){
    //if the variable of character equals t
        cout<<"Tigers"<<endl;
        //Print "Tigers"
    }
    else if (ch=='E'){
    //if the variable of character equals E
        cout<<"Eagles"<<endl;
        //Print "Eagles"
    }
    else if (ch=='e'){
    //if the variable of character equals e
        cout<<"Eagles"<<endl;
        //Print "Eagles"
    }
    else if (ch=='B'){
    //if the variable of character equals B
        cout<<"Bears"<<endl;
        //Print "Bears"
    }
    else if (ch=='b'){
    //if the variable of character equals b
        cout<<"Bears"<<endl;
        //Print "Bears"
    }
    
else {
    cout<<"none"<<endl;
    //Print "none"
}
return 0;
}