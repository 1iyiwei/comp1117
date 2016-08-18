#include <iostream>
#include <string>
#include <sstream>   // for string stream operations...
using namespace std;

int main(void)
{  
  ostringstream dest;
  // ^^^^^^^^^
  // dest is a variable:
  //  1. name [[ dest ]]
  //  2. type [[ ostringstream ]]
  //  3. value [[ area holding some strings ]]
  
  cout << "This line sends to screen..." << endl;
  dest << "This line sends to the string stream \"des\" ... " << endl;
  dest << "Again, anything can be printed to it like expressions: "
       << "3 + 4 = " << 3 + 4 ;
  
  // dest [[
  //         This line sends .....
  //         3 + 4 = 7
  //      ]]
  //
  // The content of a stream stream can be extracted using the
  // .str() member function;  e.g.,

  string result = dest.str();
  //              ^^^^^^^^^^
  //              take out the string representation from the stream
  //
  // Note that dest is of type "ostringstream", not "string".
  //           
  
  cout << "\nThe content of the string stream is as follows:" << endl;
  cout << result << endl;
  
}

