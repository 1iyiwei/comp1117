#include <iostream>
#include <cmath>

using namespace std;

// struct is a keyword in c++

struct Point 
{ 
    double x;
    double y;
};              // must end with ";" 


void printPoint(Point p)
{  // function can take struct parameter
    cout << "(" << p.x << "," << p.y << ")" ; 
}

Point getPoint(void)
{
    // post: gets the (x,y) coordinates of a point from cin and returns
    //       this point
    double input_x, input_y;
    cin >> input_x >> input_y; 
    Point p;
    p.x = input_x;  // use "." operator to access a field
    p.y = input_y;
    return p;
}

double square(double x)
{  
	return x * x;
}

double point_distance(Point p, Point q)
{
    // post: return the distance between p & q
    return sqrt( square(p.x - q.x) + square(p.y - q.y) );
}

double point_length(Point p)
{
    return sqrt(square(p.x) + square(p.y));
}

void swap(Point& p, Point& q)
{
    Point temp = p;
    p = q;
    q = temp;
}

int main(void)
{ 
    cout << "Please enter the co-ordinates of a point: ";
    Point p1 = getPoint();   // p1, p2 are variables of type Point
	
    cout << "Please enter the co-ordinates of a point: ";
    Point p2 = getPoint();
	
    cout << "The distance between ";
    printPoint(p1);  
    cout << " and ";
    printPoint(p2);  
    cout << " is: " << point_distance(p1, p2) << endl;    
	
    const int num_points = 4;
    Point points[num_points];
    int count = 0;
    cout << "Please enter a set of " << num_points << " points" << endl;
    
    double x, y;
    while(cin >> x >> y)
    {
        points[count].x = x;
        points[count].y = y;
        ++count;

        if(count >= sizeof(points)/sizeof(Point))
            break;
    }
	
    // sort the points with their lengths
    for(int i = 0; i < count; ++i)
    {
        int index = i;
        for(int j = i + 1; j < count; ++j)
        {
            if(point_length(points[index]) > point_length(points[j]))
                index = j;
        }
        swap(points[index], points[i]);
    }
	
    cout << "The points sorted by their distances to the origin: " << endl;
    for(int i = 0; i < count; ++i)
        printPoint(points[i]);
    
    return 0;
}

// Note that the input/output of user-defined types are not
// supported by default.

// The input/output facilities must be supplied by programmer.


