/*
  compile with distance_lib.cpp
 */

#include <iostream>
using namespace std;

double distance(double x1, double y1, double x2, double y2);

int main(void)
{
    double x1, y1, x2, y2, x3, y3;

    cout << "enter the 3 2D points" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double dist12 = distance(x1, y1, x2, y2); 
    double dist23 = distance(x2, y2, x3, y3); 
    double dist31 = distance(x3, y3, x1, y1); 
    
    double minimal = dist12;

    if(minimal > dist23)
    {
        minimal = dist23;
    }
    if(minimal > dist31)
    {
        minimal = dist31;
    }

    cout << "minimal: " << minimal << endl;

    return 0;
}

