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
    struct lunchbox A, B;
    //declare two structure lunchbox A and B

    cout<<"A maindish: ";
    //output A maindish:
    cin>>A.maindish;
    //input the value of A.maindish
    cout<<"A sidedish 1: ";
    //output A sidedish 1:
    cin>>A.sidedish[0];
    //input the value of A.sidedish[0]
    cout<<"A sidedish 2: ";
    //output A sidedish 2:
    cin>>A.sidedish[1];
    //input the value of A.sidedish[1]
    cout<<"A sidedish 3: ";
    //output A sidedish 3:
    cin>>A.sidedish[2];
    //input the value of A.sidedish[2]
    cout<<"A beverage: ";
    //output A beverage:
    cin>>A.beverage;
    //input the value of A.beverage

    B=A;
    //B equals to A
    cout<<"B.maindish: ";
    //output B.maindish:
    cin>>B.maindish;
    //input the value of B.maindish

    cout<<"A Main dish: "<<A.maindish<<endl;
    //output A Main dish and the value of A.maindish
    cout<<"A Side dish 1: "<<A.sidedish[0]<<endl;
    //output A Side dish 1 and the value of A.sidedish[0]
    cout<<"A Side dish 2: "<<A.sidedish[1]<<endl;
    //output A Side dish 2 and the value of A.sidedish[1]
    cout<<"A Side dish 3: "<<A.sidedish[2]<<endl;
    //output A Side dish 3 and the value of A.sidedish[2]
    cout<<"A Beverage: "<<A.beverage<<endl;
    //output A Beverage and the value of A.beverage

    cout<<"B Main dish: "<<B.maindish<<endl;
    //output B Main dish and the value of B.maindish
    cout<<"B Side dish 1: "<<B.sidedish[0]<<endl;
    //output B Side dish 1 and the value of B.sidedish[0]
    cout<<"B Side dish 2: "<<B.sidedish[1]<<endl;
    //output B Side dish 1 and the value of B.sidedish[1]
    cout<<"B Side dish 3: "<<B.sidedish[2]<<endl;
    //output B Side dish 3 and the value of B.sidedish[2]
    cout<<"B Beverage: "<<B.beverage<<endl;
    //output B Beverage and the value of B.beverage

    return 0;
}