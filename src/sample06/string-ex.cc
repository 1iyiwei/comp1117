// Program illustrating string operations & member functions.

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string r = "creative process";  // when r is created, it's contents is "creative process"
  string s  ("programming is");  // another form of initialization
  string t ("a");  
  string u(r);

  //  string t = "a";

  unsigned int len_s = s.length();  // 14 // length() member function (method)

  // s.length() returns the no. of characters in s.
  // ===> can be imagined that it is length(s)
  unsigned int len_t = t.length(); // 1
  unsigned int len_r = r.length(); // 16  // .length is defined in the string library

  // if (t.length() > len_s) // t.length() returns an unsigned number 
  cout << "t is " << (t.length() > len_s ? "longer" : "shorter") << " than s" << endl;

  // in this computer, it uses 32-bits (one word) to store
  // a number
  // int -> -ve, 0, +ve  : 2^32 different numbers
  //                       [-2^31 .. 2^31 - 1]
  //  -1 : 32 1's

  unsigned int x = (1 << 31) + 2; // 2^31 + 2
  int y = -1;
  if (x > y)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  

  // unsigned int -> 0, +ve : [0 .. 2^32 - 1]
  // 32 1's means 2^32 - 1 for unsigned number

  // IN the course computer organization (or assembly language)
  // you'll learn more about the hardware of storing numbers.

  cout << "Strings length: " << len_s << endl;   // 14
  cout << "Strings length: " << len_t << endl;   // 1
  cout << "Strings length: " << len_r << endl;   // 16

  string w = s + t + r;      // string concatenation
  // "programming isacreative process"

  cout << "String concatenation: " << w << endl;
  
  w = s + " " + t + " " + r;   // concatenation involving string literals
  // "programming is a creative process"
  
  cout << "String concatenation: " << w << endl;
 
  string temp("hello");
  
  w = temp + " world";
  
  cout << "String concatenation: " << w << endl;  // hello word


  w = " "; // empty string?  It's a string with a single character, which
  // w is NOT empty in this case
  // it has one character, which is a space


  w = "";
  // Yes, this is a string is zero no. of character
  // => it's an empty string

  // is a space.
  if (w.empty()) // .empty() return true/false
    cout << "w is an empty string" << endl;
  else
    cout << "w is not an empty string" << endl;

  w.clear();                // OR w = "";  // an empty string literal
  cout << "The content of w is: " << w << endl;

  if (w.empty()) // is true right now
    cout << "empty" << endl;
  else
    cout << "w is not an empty string" << endl;
  
  cout << "The content of w is: " << w << endl;


  return 0;
}

// s.length() return size_t, sort of integral type
// size_t is more accurate than int for len_s & len_r
