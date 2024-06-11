#include <iostream>
using namespace std;

double larger_complex(struct complex (*p1),struct complex (*p2));

struct complex{
  double real, imag;
  //declare double variables of real and imag
  };
struct complex n1;
//declare a complex structure n1
struct complex n2;
//declare a complex structure n2

double larger_complex(struct complex (*p1),struct complex (*p2))
{
    complex q1=*p1;
    //structure complex q1 equals *p1
    complex q2=*p2;
    //structure complex q2 equals *p2
    
    double abs1=(p1->real)*(p1->real)+(p1->imag)*(p1->imag);
    //double variable abs1 equals (p1->real)*(p1->real)+(p1->imag)*(p1->imag)
    double abs2=(p2->real)*(p2->real)+(p2->imag)*(p2->imag);
    //double variable abs2 equals (p2->real)*(p2->real)+(p2->imag)*(p2->imag)

    if(abs1>abs2){
      //if abs1 is larger than abs2
      return p1->real;
      //return p1->real
    }
    else{
      //if else
      return p2->real;
      //return p2->real
    }
}


int main()
{
    
    cout<<"Complex number 1: ";
    //output Complex number 1:
    cin>>n1.real>>n1.imag;
    //input the value of n1.real and n1.imag in order
    cout<<"Complex number 2: ";
    //output Complex number 2:
    cin>>n2.real>>n2.imag;
    //input the value of n2.real and n2.imag in order

    larger_complex(&n1,&n2);
    //call the function larger_complex using &n1 and &n2

    cout<<"Print the complex number with larger absolute value: ";
    //output Print the complex number with larger absolute value:

    if(larger_complex(&n1,&n2)==n1.real){
      //if the function gets the same value as n1.real
      cout<<n1.real<<"+"<<n1.imag<<"i"<<endl;
      //output n1.real+n1.imag in order
    }
    else{
      //if else
      cout<<n2.real<<"+"<<n2.imag<<"i"<<endl;
      //output n2.real+n2.imag in order
    }

    return 0;
}