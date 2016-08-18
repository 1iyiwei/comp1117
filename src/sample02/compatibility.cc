// A program to show mixing types (int and double)on arithmetic expressions.
#include <iostream>

int main()
{
  using namespace std;
  
  int x = 10; 
  int y = 3; 
  double w = 1.2;
  double z = 0.3;
	
  cout << " x * y = " << x * y << endl;		// ==> 30
  
  // multiplication of two integers will result an int value
  
  cout << " z * w = " << z * w << endl;		// ==> 0.36
  
  // multiplication of two double values will result an double value
  
  cout << " y * w = " << y * w << endl;		// ==> 3.6
  
  // multiplication of one integer and one double will result a double value
  
  cout << " x / y = " << x / y << endl;		// ==> 3
  
  // division of two integers will result an int value
  
  cout << " z / w = " << z / w << endl;		// ==> 0.25
  
  // division of two double values will result an double value
  
  cout << " x / w = " << x / w << endl;		// ==> 8.33333
  
  // division of one integer and one double will result a double value
  
  x = w;
  
  // warning message will be given by compiler in converting to int from double
  // only the integral part value of w is assigned to x 
  
  cout << "x = "<< x << endl;			// ==> 1
  
  w = y; 
  
  // no warning message will be given 
  cout << "w = "<< w << endl;			// ==> 3
	
  return 0;
}


