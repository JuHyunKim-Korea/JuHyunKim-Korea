#include <iostream>
using namespace std;

class largest
{   
    private:
        int x,y,z;
        //declare integer values of x,y,z
    public:
        void input();
        //declare a void member input
        int display();
        //declare an integer member display
            
};

inline void largest::input()
//bring an inline void function named largest and it's member input
{   
    cout<<"Enter two numbers: ";
    //output "Enter two numbers: "
    cin>>x>>y;
    //input x and y
    
}

inline int largest::display()
//bring an inline void function named largest and it's member display
{   
    z=(x>y?x:y);
    //z equals to x when x is greater than y
    cout<<"Largest number: "<<z<<endl;
    //output "Largest number: " and input z
    return z;
}

int main()
{
    int a,b,c;
    //declare integer values of a,b,c
    largest large;
    //declare a class named large
    large.input();
    //bring the input of large
    large.display();
    //bring the display of display

    return 0;
}