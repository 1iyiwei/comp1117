// This program illustrates the "assignment operator"
// Associativity, precedence, ....

#include <iostream>

int main()
{
  using namespace std;
                            //     Memory 
  double radius ;           //  |          | <-- radius
  double area ;		    //	|          | <-- area
  double circumference;    //	|          | <-- circ


  // what are the values of radius, area, & circumference at this point?

  cout << "enter radius: ";	   
  cin >> radius; 		   

  area = 3.14159 * radius * radius  ; // 1. find the value of the expr on
                                      //    the r.h.s of the assignment
                                      //    
                                      // 2. content of area is set to 314.sth

  // what's the value of evaluating the whole assignment expression?
  // is that of the r.h.s

  circumference = 3.14159 * 2 * radius;

  cout << " area = " << area   // 314.st
       << " circumference = " << circumference   // 62.8st
       << endl;

  return 0;
}

// can read the assignment operator as "gets";
// "area gets the value ..."

//   // cascading initialization; e.g.,
//   circumference = area = radius = 0; // right-to-left associativity
//   // same as putting parenthesis like:
//	circumference(0), area(0), radius(0);

