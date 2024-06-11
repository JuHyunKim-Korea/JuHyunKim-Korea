#include <iostream>
using namespace std;

int main()
{
    int a(a>=0 && a<=9),r;
    //initialize the variable of integer as a, the variable of the answer as r
    cout<<"Enter an integer: ";
    //Print "Enter an integer: "
    cin>>a;
    //Input the variable of an integer

    switch(a){
        case 0: cout<<"13*13= ";
        //case of 0, print "13*13= "
                cin>>r;
                //Input the variable of answer
                if (r==169) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 169, print "Correct"
                else if (r!=169) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 169, print "Wrong"
                break;
        case 1: cout<<"17*17= ";
        //case of 1, print "17*17= "
                cin>>r;
                //Input the variable of answer
                if (r==289) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 289, print "Correct"
                else if (r!=289) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 289, print "Wrong"
                break;
        case 2: cout<<"17*17= ";
        //case of 2, print "17*17= "
                cin>>r;
                //Input the variable of answer
                if (r==289) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 289, print "Correct"
                else if (r!=289) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 289, print "Wrong"
                break;
        case 3: cout<<"13*13= ";
        //case of 3, print "13*13= "
                cin>>r;
                //Input the variable of answer
                if (r==169) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 169, print "Correct"
                else if (r!=169) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 169, print "Wrong"
                break;
        case 4: cout<<"13*13= ";
        //case of 4, print "13*13= "
                cin>>r;
                //Input the variable of answer
                if (r==169) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 169, print "Correct"
                else if (r!=169) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 169, print "Wrong"
                break;
        case 5: cout<<"19*19= ";
        //case of 5, print "19*19= "
                cin>>r;
                //Input the variable of answer
                if (r==361) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 361, print "Correct"
                else if (r!=361) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 361, print "Wrong"
                break;
        case 6: cout<<"19*19= ";
        //case of 6, print "19*19= "
                cin>>r;
                //Input the variable of answer
                if (r==361) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 361, print "Correct"
                else if (r!=361) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 361, print "Wrong"
                break;
        case 7: cout<<"13*13= ";
        //case of 7, print "13*13= "
                cin>>r;
                //Input the variable of answer
                if (r==169) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 169, print "Correct"
                else if (r!=169) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 169, print "Wrong"
                break;
        case 8: cout<<"19*19= ";
        //case of 8, print "19*19= "
                cin>>r;
                //Input the variable of answer
                if (r==361) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 361, print "Correct"
                else if (r!=361) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 361, print "Wrong"
                break;
        case 9: cout<<"17*17= ";
        //case of 9, print "17*17= "
                cin>>r;
                //Input the variable of answer
                if (r==289) {cout<<"Correct"<<endl;}
                //if the variable of answer equals 289, print "Correct"
                else if (r!=289) {cout<<"Wrong"<<endl;}
                //if the variable of answer does not equal 289, print "Wrong"
                break;
        default: cout<<"none"<<endl;
        //default, print "none"
    }
return 0;
}