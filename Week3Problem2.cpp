#include <iostream>
using namespace std;

void print_characters(char c, int n);
//declare the void function of print_characters that uses character c and integer n
void print_characters(char c,int n)
{
    for(int i=0;i<26;i++)
    //using a for loop, if integer variable i is 0 and less than 26, it increases by adding 1
    {
        for(int n=0;n<(i);n++)
        //using for loop, if integer variable n is 0 and less than variable i, it increases by adding 1
        {
        cout<<c;
        //output c
        }
        n++;
        //increasing by adding 1 to n
        cout<<c<<endl;
        //output c
        c=(int)c+1;
        //character variable c equals to the integer value of c plus 1
        
    }
}


int main()
{
    char c;
    //declare character variable x
    int n;
    //declare integer variable y
    
    print_characters(c,n);
    //bring the function print_characters and plug in x and y

    return 0;
}