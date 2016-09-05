// Program to show different operators in arithmetic expressions
#include <iostream>

int main()
{
  using namespace std;
  
  // binary operators
  cout << "5 / 2 = " << 5 / 2 << endl; 
  cout << "5 % 2 = " << 5 % 2 << endl; 
  cout << "5.0 / 2.0 = " << 5.0 / 2.0 << endl; 
  cout << "5 / 2.0 = " << 5 / 2.0 << endl;  

  // unary operators
  cout << "+3 = " << +3 << endl;    
  cout << "-3 = " << -3 << endl;    
  cout << "- - 3 = " << (- (- 3)) << endl; 

  // mixed
  cout << "-5 / 2 = " << -5 / 2 << endl;
  cout << "-5 % 2 = " << -5 % 2 << endl;

  // binary operators: addition, subtraction...
  cout << "1 + 2 + 3 + 4 = " << 1 + 2 + 3 + 4 << endl;  

  cout << "1 - 2 + 3 - 4 = " << 1 - 2 + 3 - 4 << endl; 

  cout << "(1 - 2) + (3 - 4) = " << ((1 - 2) + (3 - 4)) << endl; 

  cout << "1 - (2 + 3) - 4 = " << 1 - (2 + 3) - 4 << endl; 

  cout << "1 + 2 * 3 - 4 = " << 1 + 2 * 3 - 4 << endl; 
 
  return 0;
  
}

