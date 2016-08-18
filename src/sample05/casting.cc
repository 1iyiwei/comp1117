// This program illustrates one of the usage of casting. 

#include <iostream>
using namespace std;

int main(void)
{
  int i, j;
  cout << "please enter two integers" << endl;
  cin >> i >> j;
  // since i and j are both integer variables, i/j is an integer division. 
  cout << "Integral division of the two integers: " << endl;
  cout << i << "/" << j << " = " << i/j << endl; 	
  
  // After casting one of the operand, the division become dobule division.
  cout << "Double division of the two integers: " << endl;
  cout << "static_cast<double>(" << i << ")/" << j << " = "; 
  cout << static_cast <double> (i) / j << endl;
  cout << "Or using the simply vsrsion: " << endl;
  cout << i << "/" <<  "(double)" << j << " = ";
  cout << i / (double) j << endl;
  return 0;
}

  
