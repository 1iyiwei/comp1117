// Find the absolute value of a given number.
// |x| = x if x >= 0; otherwise |x| = - x

// e.g.,
//       | 23 | = 23
//       | 0 | = 0
//       | -23 | = 23

#include <iostream>

int main(void)
{
  using namespace std;

  cout << "enter a number: " ;

  int x;
  cin >> x;     // 23

  int abs_of_x; // 23

/*
  if (x >= 0)               // Conditional operator can be used here
     abs_of_x = x;
  else
     abs_of_x = -x;
*/

  abs_of_x = (x >= 0) ? x : -x;

  cout << "The absolute value of " << x << " is " << abs_of_x << endl;

  return 0;
}




