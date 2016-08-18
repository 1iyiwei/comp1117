#include <iostream>
using namespace std;

#include "Point.hpp"

int main(void)
{
    cout << "enter two points" << endl;

    Point points[2];

    for(int i = 0; i < 2; i++)
    {
        float x, y;
        cin >> x >> y;
        
        points[i] = Point(x, y);
    }

    bool equal_value =  equal(points[0], points[1]);
    cout << "the two points are " << (points[0] == points[1] ? "equal" : "not equal") << endl;

    float distance = points[0].distance(points[1]);

    cout << "their distance is " << distance << endl;

    return 0;
}
