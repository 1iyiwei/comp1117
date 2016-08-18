#include <iostream>
#include <fstream>
using namespace std;  

int main(void)
{
  string name;

  cout << "enter file name for counting" << endl;

  cin >> name;
	
  ifstream myfile(name.c_str());  // name.c_str() returns a c-style string
	
  if (myfile.fail())
  {              
    cout << "Error: file cannot be opened!" << endl;
    exit(1);        
  }
	
  char c;
  int no_line = 0;      // no. of lines
  int no_char = 0;      // no. of characters
  while (true)
  {
    myfile.get(c);						// read a char 
    if (myfile.eof())
      break;
    ++no_char;
    if(c == '\n')
      ++no_line;
  }
  
  myfile.close();
  
  cout << "No. of lines: " << no_line << endl;
  cout << "No. of characters: " << no_char << endl;

  return 0;
}

