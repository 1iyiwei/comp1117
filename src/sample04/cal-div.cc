// This program illustrates the simple usage of if-statement 
// It take two numbers, x and y, as input and output x/y 

#include <iostream>

int main(void)
{
    using namespace std;
    
    float x, y;
    cout << "Please input two numbers" << endl;
    cin >> x >> y;
    
    if(y != 0)
        cout << x << "/" << y << " is " << x/y << endl;
 
    if(y  == 0)
        cout << "The second number can't be zero" << endl;		
  	
    return 0;
}
