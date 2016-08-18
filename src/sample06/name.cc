#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  cout << "May I have your name? ";

  string name;
  cin >> name;

  if(name == "Paul") 
  {
    cout << " that's a very nice name" << endl;
    cout << " I want to go out with you" << endl;
  } // a block statement ( a compound statement)
  else 
  {
    cout << name << " might be a nice name" << endl;
    cout << "However, I'm so busy this evening." << endl;
  }

  return 0;
}

// Syntax of if/else statement
//
// if (condition)
//    if-part-statement;
// else
//    else-part-statement;


// What if user enters "peter"? or "PETER"?

