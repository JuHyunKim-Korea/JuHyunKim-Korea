#include <iostream>
using namespace std;


double divide2(int a, int b);
//declare a double fucntion named divide2 using integer variable a and b
float add3(float a, float b, float c);
//declare a float function named add3 using float variable a,b,c
int x,y,z,p,q,r;
//declare integer variables of x,y,z,p,q,r

double divide2(int a,int b)
{
    double x;
    //declare a double variable x
    x=(double)a/b;
    //x equals double a over double b
    return x;
} 

float add3(float a, float b, float c)
{
    float y;
    //declare variable y
    y=(float)a+b+c;
    //y equals the addition of float a, float b, and float c
    return y;
}

int main()
{
    cout<<"Enter 6 integer numbers: ";
    //output "Enter 6 integer numbers: "
    cin>>x>>y>>z>>p>>q>>r;
    //input integer variables x,y,z,p,q,r

    divide2(x,y);
    //use divide2 function, plugging in x and y
    divide2(z,p);
    //use divide2 function , plugging in z and p
    divide2(q,r);
    //use divide2 function, plugging in q and r

    add3(divide2(x,y),divide2(z,p),divide2(q,r));
    //use add3 function, plugging in the output of divide2(x,y),divide2(z,p), and divide2(q,r)

    cout<<add3(divide2(x,y),divide2(z,p),divide2(q,r))<<endl;
    //output the result of the add3 function

    return 0;
}