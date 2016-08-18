// This program illustrates the simple usage of if/else-statement 
// It take two numbers, x and y, as input and output x/y 

#include <iostream>

int main(void)
{
    using namespace std;
    
    float x, y;
    cout << "Please input two numbers \n";
    cin >> x >> y;
    
    if(y != 0)
    {
        cout << x << "/" << y << " is " << x/y << endl;
    }
    else
    {  
	cout << "The divisor can't be zero" << endl;
	cout << "    ^^^^^^^ " << endl;
    }             
    
    return 0;
}
 
// Syntax of if/else statement
//
// if (condition)
//    if-part-statement;
// else
//    else-part-statement;

