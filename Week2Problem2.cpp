#include <iostream>
using namespace std;

int main()
{
    int g,a,m;
    //initialize variable of grade as g, answer as a, and multiplcation answer as m
    cout<<"What grade(1,2): ";
    //Print "What grade(1,2): "
    cin>>g;
    //Input the variable of grade

    if(g==1 || g==2){
    //if the variable of grade equals 1 or 2
        
        if (g==1){
        //if the variable of grade equals 1
        int a (a==0||a==1);
        //Initialize the variable of answer that equals to 0 or 1
        cout<<"Columbus discoverd America. Correct 1, Wrong 0: ";
        //Print "Columbus discoverd America. Correct 1, Wrong 0: "
        cin>>a;
        //Input the variable of answer
        
        if(a==1){
        //if the variable of answer equals 1
            cout<<"Wrong"<<endl;
            //Print "Wrong"
        }
        else if(a==0){
        //if the variable of answer equals 0
            cout<<"Correct"<<endl;
            //Print "Correct"
        }
        }

        if (g==2){
        //if the variable of grade equals 2
            int m;
            //initialize multiplication answer
            cout<<"35*76= ";
            //Print "35*76= "
            cin>>m;
            //Input the variable of the multiplication answer

            if (m==2660){
            //if the variable of multiplication answer equals 2660
                cout<<"Correct"<<endl;
                //Print "Correct"
            }
            else if (m!=2660){
            //if the variable of multiplication answer does not equals 2660
                cout<<"Wrong"<<endl;
                //Print "Wrong"
            }
        }
    }
    else {
    //if the variable of grade does not equals 1 or 2
        cout<<"none";
        //Print "none"
    }

    return 0;
}


   
