#include <iostream>
using namespace std;

struct lunchbox{
    int maindish;
    //declare an integer variable named maindish
    int sidedish[3];
    //declare an integer variable named sidedish in an array
    int beverage;
    //declare an integer variable named beverage
};

int main()
{
    lunchbox box[2];
    //declare an array structure box of 2
    for(int i=0;i<2;i++)
    //using for loop, when integer variable i equals 0 and less than 2, it increases by adding 1
    {
        cout<<"Lunchbox "<<i+1<<endl;
        //output Lunchbox and the number following i+1
        cout<<"Main dish: ";
        //output Main dish:
        cin>>box[i].maindish;
        //input the value of the following box[i].maindish
        cout<<"Side dish 1: ";
        //output Side dish 1:
        cin>>box[i].sidedish[0];
        //input the value of the following box[i].sidedish[0]
        cout<<"Side dish 2: ";
        //output Side dish 2:
        cin>>box[i].sidedish[1];
        //input the value of the following box[i].sidedish[1]
        cout<<"Side dish 3: ";
        //output Side dish 3:
        cin>>box[i].sidedish[2];
        //input the value of the following box[i].sidedish[2]
        cout<<"Beverage: ";
        //output Beverage:
        cin>>box[i].beverage;
        //input the value of the following box[i].beverage
    }

    for(int j=0;j<2;j++)
    //using for loop, when integer variable j equals 0 and less than 2, it increases by adding 1
    {
        cout<<"Lunchbox "<<j+1<<endl;
        //output Lunchbox and the number following j+1
        cout<<"Main dish: "<<box[j].maindish<<endl;
        //output Main dish: and the following value of box[j].maindish
        cout<<"Side dish 1: "<<box[j].sidedish[0]<<endl;
        //output Side dish 1: and the following value of box[j].sidedish[0]
        cout<<"Side dish 2: "<<box[j].sidedish[1]<<endl;
        //output Side dish 2: and the following value of box[j].sidedish[1]
        cout<<"Side dish 3: "<<box[j].sidedish[2]<<endl;
        //output Side dish 3: and the following value of box[j].sidedish[2]
        cout<<"Beverage: "<<box[j].beverage<<endl;
        //output Beverage: and the following value of box[j].beverage
    }

    return 0;
}