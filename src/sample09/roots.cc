#include <iostream>
#include <cmath>
using namespace std;


void roots(double a, double b, double c,    // a, b, and c are value parameters
	   double &root1, double &root2)  // root1 and root2 are reference
 //                                      
// post: root 1 and root 2 set to roots of 
//       quadratic ax^2 + bx + c
//       values undefined if no roots exist
{
  double delta;
  delta = b * b - 4 * a * c; 
  root1 = ( -b + sqrt( delta ) ) / (2 * a );
  root2 = ( -b - sqrt( delta ) ) / (2 * a );
} 

int main(void)
{
  double C_a, C_b, C_c;  
  
  cout << "enter coefficients ";
  cin >> C_a >> C_b >> C_c;  

  double r1(0) , r2(0); 
  roots(C_a, C_b, C_c, r1, r2); 
  
  cout << "roots are " << r1 << " " << r2 << endl;
  
  return 0;
}

//   roots(1, 0, -1, r1, r2);      // okay? 
//   roots(1, 0, -1, r1, r2 + 2);  // okay? 
//   roots(1, 0, -1, r1, r2 + r1); // okay? 
//   roots(1, 0, -1, 1, r2);       // okay? 
//   roots(1, 0, -1, k, r2);       // okay? 
//   roots(r1, r2, r1, r2, r1);    // okay?
//   roots(r1, r2, r1, r1, r1);    // okay?






