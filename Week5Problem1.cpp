#include <iostream>
using namespace std;

struct lunchbox{
    int maindish;
    //declare an integer variable named maindish
    int sidedish[3];
    //declare an integer variable named sidedish in an array
    int beverage;
    //declare an integer variable named beverage
}lunchbox;

int main()
{
    struct lunchbox F = {30,{3,5,0},10};
    //declare 
    int sum=0;
    //declare an integer variable of sum into 0
    sum=F.maindish+F.sidedish[0]+F.sidedish[1]+F.sidedish[2]+F.beverage;
    //sum equals adding the value of all the members of the lunchbox structure
    cout<<"Main dish: "<<F.maindish<<endl;
    //output Main dish: and get the information from the user
    cout<<"Side dish 1: "<<F.sidedish[0]<<endl;
    //output Side dish 1: and get the information from the user
    cout<<"Side dish 2: "<<F.sidedish[1]<<endl;
    //output Side dish 2: and get the information from the user
    cout<<"Side dish 3: "<<F.sidedish[2]<<endl;
    //output Side dish 3: and get the information from the user
    cout<<"Beverage: "<<F.beverage<<endl;
    //output Beverage: and get the information from the user

    cout<<"Total: "<<F.maindish<<" + "<<F.sidedish[0]<<" + "<<F.sidedish[1]<<" + "<<F.sidedish[2]<<" + "<<F.beverage<<" = "<<sum<<endl;
    //output Total and all the values of the structure members

    return 0;
}