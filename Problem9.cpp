#include <iostream>
using namespace std;

int a,b;
int main()
{
    cout<<"Enter an amount: $ ";
    cin>>a;

    b=a+(a*0.05);
    cout<<"With tax added: $ "<<b<<endl;
    

    return 0;
}