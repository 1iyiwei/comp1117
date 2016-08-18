// This program reads in 3 2D points and reports the minimum distance
// of the 3 pairs of points.

#include <iostream>
#include <cmath>
using namespace std;

// This function determines the distance between two points using
// the well-known formula:
//               ________________________  
//              /          2             2
//            \/  (x1 - x2)   + (y1 - y2)
//
double pair_distance(double x1, double y1, double x2, double y2)
{
    double dx = x1 - x2;  
    double dy = y1 - y2;	
    double distance = sqrt(dx * dx + dy * dy);
    return distance;
}

int main(void)
{
    cout << "Enter the coordinates of 3 points: ";
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // 1. reduce code repetition
    //	the following code are reduced after using function.
    /*   
         double dx12 = x1 - x2;                          
         double dy12 = y1 - y2;			  								
         double dist12 = sqrt(dx12 * dx12 + dy12 * dy12);
         double dx23 = x2 - x3;
         double dy23 = y2 - y3;
         double dist23 = sqrt(dx23 * dx23 + dy23 * dy23);
         double dx31 = x3 - x1;
         double dy31 = y3 - y1;
         double dist31 = sqrt(dx31 * dx31 + dy31 * dy31);
    */
	
    // 2. improve the readibility
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
