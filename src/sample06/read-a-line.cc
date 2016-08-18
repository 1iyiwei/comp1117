// Program illustrates input using getline function.

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  cout << "What's your U.no. & name?  Please type everything in one line " << endl;

  string a_line;
  getline(cin, a_line);              // why not "cin >> a_line;" ???
  
  int first_space = a_line.find(" ");
  // 2006123456789 Michael Jordan
  //              ^
  //              13
  string u_no = a_line.substr(0, first_space);  
  string name = a_line.substr(first_space + 1);    // why +1 is necessary? 
  
  cout << "U.no. : " << u_no << endl;
  cout << "Name  : " << name << endl;
   
  return 0;
}

  
