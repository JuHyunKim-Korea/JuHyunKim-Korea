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
    
    if (r==0){
    //if the variable of remainder equals 0
        cout<<"Monday"<<endl;
        //Print "Monday"
    }
        else if (r==1){
        //if the variable of remainder equals 1
        cout<<"Tuesday"<<endl;
        //Print "Tuesday"
    }
        else if (r==2){
        //if the variable of remainder equals 2
        cout<<"Wednesday"<<endl;
        //Print "Wednesday"
    }
        else if (r==3){
        //if the variable of remainder equals 3
        cout<<"Thursday"<<endl;
        //Print "Thursday"
    }
        else if (r==4){
        //if the variable of remainder equals 4
        cout<<"Friday"<<endl;
        //Print "Friday"
    }
        else if (r==5){
        //if the variable of remainder equals 5
        cout<<"Saturday"<<endl;
        //Print "Saturday"
    }
        else if (r==6){
        //if the variable of remainder equals 6
        cout<<"Sunday"<<endl;
        //Print "Sunday"
    }
    return 0;
}