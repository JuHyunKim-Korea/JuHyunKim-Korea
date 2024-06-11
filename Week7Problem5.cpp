#include <iostream>
using namespace std;

class rectangle
{
    public:
        int rec(int x, int y)
        //declare an integer function named rec using integer values x and y
        { 
            return (x*y);
            //return the multiplication value of x and y
        }
};

class triangle
{
    public:
        int tri(int a, int b)
        //declare an integer function named tri using integer values a and b
        {
            return (a*b)/2;
            //return the value of (a*b)/2
        }
};

class shape : public rectangle, public triangle
{
    private:
        int height,width;
        //declare integer values of height and width
    public:
        void getdata()
        {
            cout<<"Enter height: ";
            //output "Enter height: "
            cin>>height;
            //input height
            cout<<"Enter width: ";
            //output "Enter width: "
            cin>>width;
            //input width
        }
        void display()
        {
            cout<<"Area of the rectangle = "<<rec(height,width)<<endl;
            //output "Area of the rectangle = " and input the result of rec(height,width)
            cout<<"Area of the triangle = "<<tri(height,width)<<endl;
            //output "Area of the trianlge = " and input the result of tri(height,width)
        }
};

int main()
{
    shape s;
    //declare a shape class named s
    s.getdata();
    //bring the getdata() data of s
    s.display();
    //bring the display() data of s

    return 0;
}
