#include <iostream>
#include <string>

int main(void)
{
  using namespace std;
  
  cout << "Enter a string: ";
  string input;
  cin >> input;
  
  int i = 0;   // no. of character printed is zero
  while (i < input.length())
  {
    cout << input[input.length()-1-i];
    i = i + 1;
  }
  
  cout << endl;
  return 0;
}

// Ex. Write a function called reverse() that takes a string as parameter
//     and returns the reverse of it.
//
//     Having written this function, the reverse of a string can be
//     printed as follows:
// 
//              cout << reverse(input) << endl;

  

  
