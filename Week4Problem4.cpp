#include <iostream>
using namespace std;

int main()
{
	int first[3][3]={{0,0},{0,0},{0,0}};
    //declare a 2 dimensional array named first and initialize by double value 0.0
    int r,c,v,t;
    //declare integer variables named r,c,v,t

    cout<<"row: ";
    //output "row: "
    cin>>r;
    //input the integer variable of r
    cout<<"column: ";
    //output "column: "
    cin>>c;
    //input the integer variable of c
    cout<<"value: ";
    //output "value: "
    cin>>v;
    //input the integer variable of v

	for(int x=0;x<3;x++)
    //use a for loop that initializes the integer variable of x with 0, which is less than 3 and increases by adding 1
	{
		for(int y=0;y<3;y++)
        //use a for loop that initializes the integer variable of y with 0, which is less than 3 and increases by adding 1
			cout<<first[x][y]<<' ';
            //output the elements of the array of first[x][y] in space
		    cout<<endl;
            //move to the next line
	}

    int second[3][3]={{0,7},{0,0},{0,0}};
    for (int a=0;a<3;a++)
    //use a for loop that initializes the integer variable of a with 0, which is less than 3 and increases by adding 1
	{
		for (int b=0;b<3;b++)
        //use a for loop that initializes the integer variable of b with 0, which is less than 3 and increases by adding 1
			cout<<second[a][b]<<' ';
            //output the elements of the array of second[a][b] in space
		    cout<<endl;
            //move to the next line
        
	}
    return 0;
}