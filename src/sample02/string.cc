// Examples on using C++ string library
#include <iostream>
#include <string>    // you need this in order to use "string" type

int main(void)
{
  using namespace std;

  cout << "Please tell me your name: ";
  
  string name;     // a variable of string type
  cin >> name;     // input a string
  
  cout << name                       //  output strings
       << " is a nice name!" 
       << endl;  

  cout << "Please tell me your friend's name: ";

  string name2; // for some reason, the contents of name2 is an empty string

  // "abc"  is a string of 3 characters
  // "ab"   .....          2
  // "a"    .....          1
  // ""     .....          0 (an empty string)

  cin >> name2;     // input a string

  cout << name2                       //  output strings
       << " is also a nice name!" 
       << endl << endl;  

  string bye = ", see you later.";    // a string can be initialized by 
                                      // a "string literal" or other string

  string bye_with_name = name + bye; // string concatenation
  
  cout << bye_with_name << endl;     
  cout << ((name2 + bye) + " :-)") + "^_^" << endl;

  //       ^^^^^^^^^^^^
  //          string + literal ==> we have string

  //  cout << "Hi" + "Bye" << endl;    // can't concatenate two string literals

  return 0;
}


// We learn that the C++ variable names can be specified precisely.
//
// Question:  Can you describe precisely what a string literal is?
//            
  
