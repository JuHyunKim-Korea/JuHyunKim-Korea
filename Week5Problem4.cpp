#include <iostream>
using namespace std;

double add_complex(struct complex a, struct complex b);

struct complex{
  double real, imag;
  //declare double variables of real and imag
  };
struct complex n1;
//declare a complex structure n1
struct complex n2;
//declare a complex structure n2
struct complex sum;
//declare a complex structure sum

double add_complex(struct complex a, struct complex b) 
{
    sum.real=a.real+b.real;
    //sum.real value equals adding the value of a.real and b.real
    sum.imag=a.imag+b.imag;
    //sum.imag value equals adding the value of a.imag and b.imag

    return sum.real;
    //return the structure sum.real
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

    add_complex(n1,n2);
    //call function add_complex using n1 and n2 arguments
    
    char imagsign;
    //declare a character variable imagsign
    imagsign=(sum.imag>0)? '+':'-';
    //for imagsign, if sum.imag is larger than 0, it equals to '+'. If not, it equals to '-'
    sum.imag=(sum.imag>0)? sum.imag:-sum.imag;
    //for sum.imag, if sum.imag is larger than 0, it equals to sum.imag. If not, it equals to -sum.imag

    cout<<sum.real<<" "<<imagsign<<" "<<sum.imag<<"i"<<endl;
    //output the value of sum.real imagsign sum.imagi

    return 0;
}