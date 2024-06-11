#include <iostream>
using namespace std;

class large
//create a class named large 
{
    double x,y,largestN;
    //declare double variables in the name of x,y,largestN
    public:
        void input()
        {
            cout<<"Enter two numbers: ";
            //output "Enter two numbers: "
            cin>>x>>y;
            //input the variable of x and y from the user
        }
        void largest()
        {
            if(x>y){
            //if x is greater than y
                largestN=x;
                //largestN equals x
                }
            else{
            //if y is greater than x
                largestN=y;
                //largestN equals y
                }
        }
        void display()
        {
            cout<<largestN<<endl;
            //output the value of largestN
        }
};

int main()
{
    large big;
    //bring a large class in the name of big
    big.input();
    //bring the result of input
    big.largest();
    //bring the result of largest
    big.display();
    //bring the result of display

    return 0;
}
