#include <iostream>
using namespace std;

class animal
{
    protected:
        string name;
        //declare a string variable name
        int age;
        //declare an integer variable named age
    public:
        void getdata()
        {
            cout<<"Enter name: ";
            //output "Enter name: "
            cin>>name;
            //input name
            cout<<"Enter age: ";
            //output "Enter age: "
            cin>>age;
            //input age
        }
};

class Zebra :  private animal
{
    public:
        void get()
        {
            getdata();
            //bring getdata() data of Zebra
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            //output "Name: " and input name
            cout<<"Age: "<<age<<endl;
            //output "Age: " and input age
            cout<<"Zebras live in South Africa."<<endl;
            //output "Zebras live in South Africa"
        }

};

class Dolphin :  private animal
{
    public:
        void get()
        {
            getdata();
            //bring getdata() data of Dolphin
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            //output "Name: " and input name
            cout<<"Age: "<<age<<endl;
            //output "Age: " and input age
            cout<<"Dolphins live in the Pacific Ocean."<<endl;
            //output "Dolphins live in the Pacific Ocean"
        }
};

int main()
{
    Zebra z;
    //declare class Zebra named z
    z.get();
    //bring the get() data of z
    z.display();
    //bring the display() data of z
    Dolphin d;
    //declare class Dolphin named d
    d.get();
    //bring the get() data of d
    d.display();
    //bring the display() data of d

    return 0;
}