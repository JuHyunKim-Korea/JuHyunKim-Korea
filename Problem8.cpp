#include <iostream>
using namespace std;

int main()
{
    double math,english,korean,total,average;

    cout<<"Enter Math: ";
    cin>>math;
    cout<<"Enter English: ";
    cin>>english;
    cout<<"Enter Korean: ";
    cin>>korean;

    total=math+english+korean;
    cout<<"Total: "<<total<<endl;
    
    average=(math+english+korean)/3;
    cout<<"Average: "<<average<<endl;
    
    
    return 0;
}