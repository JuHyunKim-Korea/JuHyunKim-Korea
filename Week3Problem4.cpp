#include <iostream>
using namespace std;

char ch[10];
//declare an array function
int i;
//declare an integer variable i
char atoA(char ch);
//declare a function that uses a character variable ch

char atoA(char ch[10])
{
    for(int i=0;i<10;i++)
    //using for loop, when integer variable i equals 0 and less than 10, it increases by adding 1
    {
        if(ch[i]>='a'&&ch[i]<='z')
        //if ch[[i] is greater or equal to 'a' and less or equal to 'z'
        {
            ch[i]=ch[i]-32;
            //ch[i] equals ch[i] subtracting 32
        }
        else{
        //if else to the following condition
            continue;
            //continue the for loop
        }
    }

    return ch[i];
}

int main()
{
    cout<<"Enter a word: ";
    //output "Enter a word: "
    cin>>ch;
    //input ch
    atoA(ch);
    //use the function atoA(ch)

    cout<<"Converted word: "<<ch<<endl;
    //output "Converted word: " and input the output of ch

    return 0;
}