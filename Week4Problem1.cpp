#include <iostream>
using namespace std;

int x[10]={0};
//declare an array of size 10, initializing it with 0
int sum1=0;
//declare an integer variable of sum1
int sum2=0;
//delcare an integer variable of sum2

int main()
{
    int x[10]={0};
    //declare an array of size 10, initializing it with 0
    cout<<"Enter 10 integer numbers: ";
    //output "Enter 10 integer numbers: "

    for(int i=0;i<10;i++){
        //use a for loop that initializes integer variable of i with 0, which is less than 10 and increasing by adding 1
        cin>>x[i];
        //input the array of x according to the size of i

        if(x[i]%2==0){
        //if the size of the array has a remainder of 0
        sum1=sum1+x[i];
        //add the value of the array to sum1
        }
        else{
        //if else (if the size of the array does not have a remainder of 0)
        sum2=sum2+x[i];
        //add the value of the array to sum2
        }
    }

    cout<<sum1<<endl<<sum2<<endl;
    //output sum1 on the first line and sum2 on the second line

    return 0;
}