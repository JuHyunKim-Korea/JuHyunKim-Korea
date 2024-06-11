#include <iostream>
using namespace std;

int a,b;
//declare integer variable a and b

void swap()
//declare a void function named swap with no arguments
{
    int t=a;
    //integer variable t equals a
    a=b;
    //a eqauls b
    b=t;
    //b equals t

    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    //output each a and b that is swapped
}

int main()
{
    cout<<"a: ";
    //output "a: "
    cin>>a;
    //input a
    cout<<"b: ";
    //output "b: "
    cin>>b;
    //input b
    cout<<"Call swap"<<endl;
    //output "Call swap"
    swap();
    //use the swap function

    return 0;
}
