#include <iostream>
using namespace std;

int main()
{
    double x[5]={0.0};
    //declare a double type array of size 5, initializing it with 0.0
    double max=x[0];
    //declare the max of an array to x[0]
    int i;
    //declare the integer variable of i


    for(int i=0;i<5;i++)
    //use a for loop that initializes the integer variable of i with 0, which is less than 5 and increases by adding 1
    {
        cin>>x[i];
        //input the array of x according to the size of i
        
        if(x[i]>max){
        //if the value of x[i] is larger than max,
            max=x[i];
            //max equals to the value of x[i]
        }
        else{
        //if the value of x[i] is less than max,
            continue;
            //continue terminating the for loop
        }
    }        
    
    cout<<max<<endl;
    //output the max of the for loop

    return 0;
}