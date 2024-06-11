#include <iostream>
using namespace std;

int main()
{
    int d(d>=1 && d<=31);
    //initialize the variable of date as d
    int r(r>=0 && r<=6);
    //initialize the variable of remainder as r
    cout<<"Enter date: ";
    //Print "Enter date: "
    cin>>d;
    //Input the variable of date d
    r=d%7;
    //remainder MOD date over 7

    switch(r){
    case 0: cout<<"Monday"<<endl;  break;
    //case of 0, print "Monday"
    case 1: cout<<"Tuesday"<<endl;  break;
    //case of 1, print "Tuesday"
    case 2: cout<<"Wednesday"<<endl; break;
    //case of 2, print "Wednesday"
    case 3: cout<<"Thursday"<<endl; break;
    //case of 3, print "Thursday"
    case 4: cout<<"Friday"<<endl; break;
    //case of 4, print "Friday"
    case 5: cout<<"Saturday"<<endl; break;
    //case of 5, print "Saturday"
    case 6: cout<<"Sunday"<<endl; break;
    //case of 6, print "Sunday"
    default: cout<<"None";
    //default, print "None"
    }

    return 0;
}