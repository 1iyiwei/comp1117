// This program reads in 3 2D points and reports the minimum distance
// of the 3 pairs of points.

#include <iostream>
#include <cmath>
using namespace std;

double square(double x)
{
    return x * x;
}

double pair_distance(double px, double py, double qx, double qy)
{
    return sqrt(square(px - qx) + square(py - qy));
}

int main(void)
{
    cout << "Enter the coordinates of 3 points: ";
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  
    double dist12 = pair_distance(x1, y1, x2, y2);
    double dist23 = pair_distance(x2, y2, x3, y3);
    double dist31 = pair_distance(x3, y3, x1, y1);
  
    // find the minimum distance...
    double min_dist = dist12;
    if (dist23 < min_dist)
        min_dist = dist23;
    if (dist31 < min_dist)
        min_dist = dist31;
  
    cout << "The minimum distance is " << min_dist << endl;
    return 0;
}

  
