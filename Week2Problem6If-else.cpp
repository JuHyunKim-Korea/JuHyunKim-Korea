#include <iostream>
using namespace std;

int main()
{
    int a,r;
    //initialize the variable of an integer as a, the variable of the answer as r
    cout<<"Enter an integer: ";
    //Print "Enter an integer: "
    cin>>a;
    //Input the variable of an integer
    
if  (a>=0 && a<=9){
//if the variable of integer is equal or greater than 0 and equal or less than 9
    if (a==0||a==3||a==4||a==7){
    //if the variable of integer equals 0 or 3 or 4 or 7

        cout<<"13*13= ";
        //Print "13*13= "
        cin>>r;
        //Input the variable of answer

        if (r==169){
        //if the variable of answer equals 169
            cout<<"Correct"<<endl;
            //Print "Correct"
        }
        else if (r!=169){
        //if the variable of answer does not equal 169
            cout<<"Wrong"<<endl;
            //Print "Wrong"
        }
    }
    else if (a==1||a==2||a==9){
    //if the variable of integer equals 1 or 2 or 9

        cout<<"17*17= ";
        //Print "17*17= "
        cin>>r;      
        //Input the variable of answer

        if (r==289){ 
        //if the variable of answer equals 289
            cout<<"Correct"<<endl;
            //Print "Correct"
        }
        else if (r!=289){
        //if the variable of answer does not equal 289
            cout<<"Wrong"<<endl;
            //Print "Wrong"
        }
    }

    else if (a==5||a==6||a==8){
    //if the variable of integer equals 5 or 6 or 8
       
        cout<<"19*19= ";
        //Print "19*19= "
        cin>>r;
        //Input the variable of answer

        if (r==361){
        //if the variable of answer equals 361
            cout<<"Correct"<<endl;
            //Print "Correct"
        }
        else if (r!=361){
        //if the variable of answer does not equal 361
            cout<<"Wrong"<<endl;
            //Print "Wrong"
        }
    }
}
else {
//if the variable of integer is less than 0 or greater than 9
        cout<<"none"<<endl;
        //Print "none"
    }
    return 0;
}