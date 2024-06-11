#include <iostream>
using namespace std;

int main()
{
    unsigned int a,y,w,d;

    cout<<"Enter days: ";
    cin>>a;
    y=a/365;
    w=(a-(y*365))/7;
    d=a-((365*y)+(w*7));
    cout<<"Years= "<<y<<endl;
    cout<<"Weeks= "<<w<<endl;    
    cout<<"Days= "<<d<<endl;


    return 0;
}