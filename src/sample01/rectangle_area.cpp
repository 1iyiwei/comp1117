#include <iostream>
using namespace std;

int main(void)
{
    float width, height;

    cout << "enter width and height" << endl;
    cin >> width >> height;

    float area = width*height; // multiplication
    
    cout << "the area of the rectangle with width " << width << " and height " << height << " is " << area << endl;

    return 0;
}
