// This is a simple c++ program to calculate the area of a triangle
// given 3 sides a, b, and c.
// s = (a+b+c)/2
// area= sqrt s(s-a)(s-b)(s-c)

#include <iostream>
#include <cmath>      // require Math library for sqrt function
using namespace std;  // is not important at the moment

int main(void)
{        
    double a, b, c; // triangle side lengths
    double s, area;

    cout << "enter the 3 side lengths of a triangle: " << endl;
    cin >> a >> b >> c;

    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "area is " << area << endl; 

    return 0;
}
