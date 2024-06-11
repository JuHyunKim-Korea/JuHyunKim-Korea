#include <iostream>
using namespace std;

int n;
//declare the integer variable of n
void Print(int n);
//declare the void function of Print that uses the integer value of n

int main()
{
    cout<<"Enter an integer: ";
    //output "Enter an integer: "
    cin>>n;
    //input the variable of n

    Print(n);
    //call the function Print to run the program and give the output according to the user's input
    
}

void Print (int n)
//declare the function of Print in void type using the integer variable of n
{
    for(int i=1;i<=n;i++)
    //terminate for loop when it satisfies the following conditions. Integer variable i equals 1, i is equal or less than variable n, and i increases by 1.
    cout<<"Hello World"<<endl;
    //output "Hello World"
}