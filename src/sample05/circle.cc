// Program to calculate the area and circumference of a circle
#include <iostream>
using namespace std;

// function to calculate the area
double cal_area(const double PI, double radius)
{  
    double area = PI * radius * radius;
    return area;
} 

// function to calculate the circumference
double cal_circumference(const double PI, double radius)
{
    double circumference = 2 * PI * radius;
    return circumference;
}

// the variables PI and radius are used in both functions and the 
// main function, we may need to declare them as local variables
// for each function.

int main(void)
{
    double radius;
    const double PI = 3.14159;
    cout << "please enter the radius: ";
    cin >> radius;
  
    double area = cal_area(PI, radius);
    double circumference = cal_circumference(PI, radius);
    cout << "the area of the circle is: "<< area << endl;
    cout << "the circumference of the circle is: "<< circumference << endl;
 
    return 0;
}

