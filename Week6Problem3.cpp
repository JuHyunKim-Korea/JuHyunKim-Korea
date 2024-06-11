#include <iostream>
using namespace std;

class student
//create a class named student
{
    int id,mark[3];
    //declare an integer variable id and mark
    string name;
    //declare a variable name in string
    public:
        void getDetails()
        {
            cout<<"Enter the student's name: ";
            //output "Enter the student's name: "
            cin>>name;
            //input the student's name from the user
            cout<<"Enter the student's ID: ";
            //output "Enter the student's ID: "
            cin>>id;
            //input the value of integer variable id
            cout<<"Enter the student's marks: ";
            //output "Enter the student's marks: "
            cin>>mark[0]>>mark[1]>>mark[2];
            //input 3 marks for each subjects

        }
        void putDetails()
        {
            cout<<name<<" "<<id<<" "<<mark[0]<<" / "<<mark[1]<<" / "<<mark[2]<<endl;
            //output the student's name, id, and percentage
        }
};

int main()
{
    student st;
    //bring a student class in the name of st
    st.getDetails();
    //bring the result of getdata()
    st.putDetails();
    //bring the result of putdata()

    return 0;
}