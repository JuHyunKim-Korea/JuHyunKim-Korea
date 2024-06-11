#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Original Price: $ ";
    cin>>a;

    b=a*0.66;
    cout<<"Sale price: $ "<<b<<endl;

    c=1.08*b;
    cout<<"Final tax (w/ tax): $ "<<c<<endl;
   

    return 0;

}