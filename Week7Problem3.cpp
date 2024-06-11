#include <iostream>
#include <string>
using namespace std;

class student
{
    private:
        string firstname;
        //declare string named firstname
        string lastname;
        //declare string named lastname
        int age;
        //declare an integer value age
        double GPA;
        //declare a double value GPA
    public:
        void get();
        //declare a void member get()
        void display();
        //declare a void member display()
};
inline void student::get()
{
    firstname="first_name_NA";
    //initialize firstname as first_name_NA
    lastname="last_name_NA";
    //initialize lastname as last_name_NA
    age=0;
    //initialize age as 0
    GPA=0.0;
    //initialize GPA as 0.0
    cout<<"Write your firstname: ";
    //output "Write your firstname: "
    getline(cin,firstname);
    cout<<"Write your lastname: ";
    //output "Write your lastname: "
    getline(cin,lastname);
    cout<<"Write your age: ";
    //output "Write your age: "
    cin>>age;
    //input age
    cout<<"Write your GPA score: ";
    //output "Write your GPA score: "
    cin>>GPA;
    //input GPA
}
inline void student::display()
{
    {
        cout<<"First Name= "<<firstname<<endl;
        //output "First Name= " and input firstname
        cout<<"Last Name= "<<lastname<<endl;
        //output "Last Name= " and input lastname
        cout<<"Age= "<<age<<endl;
        //output "Age= " and input age
        cout<<"GPA= "<<GPA<<endl;
        //output "GPA= " and input GPA
    }
}

int main()
{
    student st1;
    //declare a student class named st1
    st1.get();
    //bring a get() data of st1
    st1.display();
    //bring a display() data of st1

    return 0;
}