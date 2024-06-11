#include <iostream>
using namespace std;

int a,b,d;
//declare an integer variable of a,b,d
int div1(int a, int b)
//declare a integer function named div1 that uses integer variable a and b
{
    int c;
    //declare an integer variable c
    c=a/b;
    //c equals a over b, the quotient
    d=a%b;
    //d equals the remainder of a over b

    return c;

}

int main()
{
    int x,y;
    //declare integer variable x and y
    cout<<"Enter two integer: ";
    //output "Enter two integer: "
    cin>>x>>y;
    //input x and y

    div1(x,y);
    //use the div1 function, plugging in the integer variable of x and y

    cout<<div1(x,y)<<" "<<d<<endl;
    //output the quotient and the remainder of the function

    return 0;
}

