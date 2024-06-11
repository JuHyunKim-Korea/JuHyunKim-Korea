#include <iostream>
using namespace std;

class student
//create a class named student
{
    int id;
    //declare an integer variable id
    string name;
    //declare a variable name in string
    public:
        void getdata()
        {
            cout<<"Enter the student's name: ";
            //output "Enter the student's name: "
            cin>>name;
            //input the student's name from the user
            cout<<"Enter the student's ID: ";
            //output "Enter the student's ID: "
            cin>>id;
            //input the value of integer variable id
        }
        void putdata()
        {
            cout<<name<<" "<<id<<endl;
            //output the student's name and id
        }
};

int main()
{
    student st;
    //bring a student class in the name of st
    st.getdata();
    //bring the result of getdata()
    st.putdata();
    //bring the result of putdata()

    return 0;
}