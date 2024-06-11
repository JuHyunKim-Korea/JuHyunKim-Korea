#include <iostream>
using namespace std;

class calc{
    private:
        int a,b,c,d,e,f;
        //declare integer values of a,b,c,d,e,f
    public:
        void get();
        //declare a void member get
        void sum();
        //declare a void member sum
        void difference();
        //declare a void member difference
        void product();
        //declare a void member product
        void division();
        //declare a void member division
        void set();
        //declare a void member set    
};
inline void calc::get()
{
    cout<<"Enter first value: ";
    //output "Enter first value: "
    cin>>a;
    //input a
    cout<<"Enter second value: ";
    //output "Enter second value: "
    cin>>b;
    //input b
}
inline void calc::sum()
{
    c=a+b;
    //c equals adding a and b
}
inline void calc::difference()
{
    d=a-b; 
    //d equals subtracting b from a  
}
inline void calc::product()
{
    e=a*b;
    //e equals multiplying a and b
}
inline void calc::division()
{
    f=a/b;
    //f equals a over b
}
inline void calc::set()
{
    cout<<"Addition of two numbers: "<<c<<endl;
    //output "Addition of two numbers: " and input c
    cout<<"Difference of two numbers: "<<d<<endl;
    //output "Difference of two numbers: " and input d
    cout<<"Product of two numbers: "<<e<<endl;
    //output "Product of two numbers: " and input e
    cout<<"Division of two numbers: "<<f<<endl;
    //output "Division of two numbers: " and input f
}


int main()
{
    calc cal;
    //declare a class named cal
    cal.get();
    //bring the get() data of cal
    cal.sum();
    //bring the sum() data of cal
    cal.difference();
    //bring the difference() data of cal
    cal.product();
    //bring the product() data of cal
    cal.division();
    //bring the division() data of cal
    cal.set();
    //bring the set() data of cal

    return 0;
}
