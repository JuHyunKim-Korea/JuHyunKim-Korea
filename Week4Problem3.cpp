#include <iostream>
using namespace std;

int main()
{
    double x[5]={0.0};
    //declare a double type array of size 5, initializing it with 0.0
    int index;
    //declare the integer variable of index

    for(int i=0;i<5;i++)
    //use for loop that initializes the integer variable of i equals 0, that is less than 5, and increases by adding 1
    {
        cin>>x[i];
        //input the double variable of x[i]
    }

    double min=x[0];
    //declare the min of an array to x[0]

    for(int i=0;i<5;i++){
    //use a for loop that initializes the integer variable of i with 0, which is less than 5 and increases by adding 1
        if(x[i]<min){
        //if the value of x[i] is less than the value of min
            min=x[i];
            //min equals to the value of x[i]
            index=i;
            //declare that integer variable of index equals the integer variable of i
            }
        }

    cout<<min<<endl;
    //output the value of min
    cout<<index<<endl;
    //output the value of index

    return 0;
}