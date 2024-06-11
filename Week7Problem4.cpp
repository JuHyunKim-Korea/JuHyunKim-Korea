#include <iostream>
using namespace std;

class Area
{
    protected:
        int a,b;
        //declare integer value a and b
    public:
        int getArea(int a,int b)
        //declare an integer function getArea using integer values a and b
        {
            return a*b;
            //return the multiplication of a and b
        }
};

class Perimeter
{
    protected:
        int x,y;
        //declare integer values of x and y
    public:
        int getPerimeter(int x, int y)
        //declare an integer function getPerimeter using integer values x and y
        {
            return 2*(x+y);
            //return the multiplication value of 2*(x+y)
        }
};

class Rectangle: public Area, public Perimeter
{
    protected:
        int area;
        //declare an integer value area
        int perimeter;
        //declare an integer value perimeter
        int length;
        //declare an integer value length
        int breadth;
        //declare an integer value breadth
    public:
        void getdata()
        {
            cout<<"Enter length: ";
            //output "Enter length: "
            cin>>length;
            //input length
            cout<<"Enter breadth: ";
            //output "Enter breadth: "
            cin>>breadth;
            //input breadth
        } 
        void display()
        {
            cout<<"The area of the rectangle is "<<getArea(length,breadth)<<endl;
            //output "The area of the rectangle is " and input the result of getArea(length,breadth)
            cout<<"The perimeter of the rectangle is "<<getPerimeter(length,breadth)<<endl;
            //output "The perimeter of the rectangle is " and input the result of getPerimeter(length,breadth)
        }
};

int main()
{
    Rectangle rt;
    //declare a rectangle class named rt
    rt.getdata();
    //bring getdata() data of rt
    rt.display();
    //bring display() data of rt
    return 0;
}