#include <iostream>
#include <string>
#include <sstream>   // for string stream operations...
using namespace std;

int main(void)
{
  string data_source = "tmchan 12 45 6 7 29 90";
  
  // create an input string stream with initial contents
  istringstream src(data_source);  

  string login;
  int a1, a2, a3, a4, a5, a6;
  
  src >> login;
  src >> a1 >> a2 >> a3;
  src >> a4 >> a5 >> a6;

  cout << "Login name: " << login << endl;
  cout << "Average assignment score: " << (a1 + a2 + a3 + a4 +a5 + a6) / 6.0 << endl;

/*
  // Another Example:
  
   cout << endl << "Enter a sentence in a line: " << endl;
   string a_line;
   getline(cin, a_line);
  
   int count = 0;
   istringstream src2(a_line);
   string a_word;
   while (src2 >> a_word)
     ++count;
   cout << "There are " << count << " words." << endl;
*/

  return 0;
}

  
