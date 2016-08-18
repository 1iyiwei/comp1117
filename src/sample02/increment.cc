// A program to illustrute the pre- and post- increment of variables.
#include <iostream>

int main()
{
  using namespace std;
  
  int x =5;				
  int y = 10;
  cout << "x= " << ++x << endl;		// ==> 6
  cout << "x= " << --x << endl;		// ==> 5
  y = ++x-2;
  cout << "y= " << y << endl;		// ==> 4
  // ++x is executed before y=x-2
  x=5;
  y = x++-2;
  cout << "y= " << y << endl;		// ==> 3
  // y=x-2 is executed before x++
  cout << "x= " << x << endl;		// ==> 6
 
  return 0;
}
