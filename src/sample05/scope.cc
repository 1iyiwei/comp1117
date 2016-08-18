// Program to show the effect in different scopes.
#include <iostream>
using namespace std;

void function_1(int x, int y)
{ 	
    int k(30);		
    cout << "in function 1: x= " << x << ", y= " << y << ", k= " << k << endl;
	
    // x= 10, y=20, k=30
    if( k > x ) // x_1 is referred to
    {		
        int y(40);		// declare another variable y_2
        x = 20; 		// modify the value of x_1
		
        // x_1 and y_2 are referred to
        cout << "in function 2: x= " << x << ", y= " << y << ", k= " << k << endl;
        // x= 20, y= 40, k= 30
	
        if ( k > y) // y_2 is referred to
        {
            cout << "y is bigger\n";
        }
    }
	
    // x_1 and y_1 are referred to 
    cout << "in function 3: x= " << x << ", y= " << y << ", k= " << k << endl;
    // x= 20, y= 20, k=30
} 


double circumference(const double PI, double radius)
{
    double circumference = 2 * PI * radius;
    return radius;
}

int main(void)
{
    int x(10), y(20);		// declare local variable x_1 and y_1
    cout << "in main 1: x= " << x << ", y= " << y <<endl;	// x=10, y=20
	
    if(x < y)
    {
        int x(30);			// another local variable x_2
	
        if (x > y)
        {
            int y(5);		// another local variable y_2
			
            // variable x_2 and y_2 are referred to
            cout << "in main 2: x= " << x << ", y= " << y <<endl;	// x=30, y=5	
        }
		
        // variable x_2 and y_1 are referred to
        cout << "in main 3: x= " << x << ", y= " << y <<endl;	// x=30, y=20
    }
	
    // variable x_1 and y_1 are referred to
    cout << "in main 4: x= " << x << ", y= " << y <<endl;	// x=10, y=20
    
    function_1(x, y);
	
    return 0;
}

