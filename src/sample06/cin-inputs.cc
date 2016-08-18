// This program illustrates the features of cin for
// getting inputs.

#include <iostream>
#include <string>
using namespace std;
  
int main(void)
{
  cout << "Enter 2 integers and 2 doubles:";
  int x, y;
  double p, q;
  cin >> x >> y >> p >> q;  // 1 2     8.9    3
  //    x gets 1, y gets 2, ... q gets 3
  
  cout << "The sum of them is " << x + y + p + q << endl;
  
  cout << "Enter 2 characters: ";
  char a, b;
  cin >> a >> b;    // t      u
  ///                  ,    =
  ///                  
  cout << "The characters are " << a << " and " << b << endl;
  
  // "hello world"
  cout << "Enter a string: ";
  string a_string, b_string;
  cin >> a_string >> b_string;   //  "hello world Hong Kong"
  //     "hello"     "world"  
  cout << "The input string is " << a_string << " and " <<
    b_string << endl;
  
  return 0;
}
