// This program illustrates the difference between
// quoted strings and simple expressions.  

#include <iostream>

int main ( ) {
  // free format: the extra spaces/newlines are not important
  // "whitespace" usually means space, newline, or tab

  // whitespace does not affect the execution of a program

  using  namespace   std;

  cout    <<      " 60  * 12 = ";  				// ==>  60 * 12 = 

  cout << 60 * 12;        //                 ==>  720

  cout << endl;           //                 ==>  

  //  60 * 12 = 720


  cout << " 60 * 12 = " << 60 * 12 << endl;  // the contracted form
  //                       ^^^^^^^^
  //                       an expression

  //  numeric literals vs string literals
  //                      ^^^^^^^^^^^^^^^
  
  cout << "PI * 2 = " 
       << "3.1416 * 2" 
       << endl;  // ==> PI * 2 = 3.1416 * 2


  cout << "PI * 2 = " 
       << 3.1416 * 2 
       << endl;    // ==> PI * 2 = 6.2832
  
  return 0;
}


// Exercise: Write a statement to print out this program.
//           i.e., when you run the program, its output is exactly
//           the same as issuing the command "cat quote.cc"
