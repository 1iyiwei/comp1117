// Program to calculate the area and circumference of a circle
#include <iostream>
using namespace std;

// global variables declare outside all functions
const double PI = 3.14159;
double radius;

// function to calculate the area
double cal_area(void)
{  
    // we can use the global variables directly 
    double area = PI * radius * radius;
    return area;
} 

// function to calculate the circumference
double cal_circumference(void)
{
    double circumference = 2 * PI * radius;
    return circumference;
}

int main(void)
{
    cout << "please enter the radius: ";
    // directly assign value to the global variable 
    cin >> radius;

    cout << "the area of the circle is: "<< cal_area() << endl;
    cout << "the circumference of the circle is: "<< cal_circumference() << endl;
 
    return 0;
}

