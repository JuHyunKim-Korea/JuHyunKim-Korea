#include <iostream>
#include <string.h>
using namespace std;

class student 
{
    string name;
    //declare a variable name using string
    int id; 
    //declare an integer variable id
    public:
        void getdata() 
        {
        cout<<"Enter the name of the student: ";
        //output "Enter the name of the student: "
        cin>>name;
        //input name
        cout<<"Enter the student ID: ";
        //output "Enter the student ID: "
        cin>>id;
        //input id
        }
        void putdata() 
        {
        cout<<"Student name: "<<name<<endl;
        //output "Student name: " and input name
        cout<<"Student ID: "<<id<<endl;
        //output "Student ID: " and input id
        }
};
    
int main()
{
        student a[5];
        //declare an array of class student of 5

        for(int i=0;i<5;i++)
        //using for loop, when an integer variable i is 0 and less than 5, it increases by adding 1
        {
            cout<<"Student: "<<i+1<<endl;
            //output "Student: " and input the following number
            a[i].getdata();
            //bring the result of the following getdata function and array
        }
        cout<<"****Output****"<<endl;
        //output "****Output****"

        for(int i=0;i<5;i++)
        //using for loop, when an integer variable i is 0 and less than 5, it increases by adding 1
        {
            cout<<"Student: "<<i+1<<endl;
            //output "Student: " and input the following number
            a[i].putdata();
            //bring the result of the following putdata function and array

        }
    return 0;
}