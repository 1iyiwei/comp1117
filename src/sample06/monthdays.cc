// This program returns the number of days of a particular
// month.  Leap year is not considered.

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  cout << "enter a month (lowercase letters): ";

  string month;
  cin >> month;

  int days;

  if (month == "february")                     // Note that the else part
    days = 28; 				       // corresponds to the closest
  else if (month == "september")  	       // if statement.
    days = 30;				       //
  else if (month == "april") 		       // Aware the "dangling else"
    days = 30;				       // problem.
  else if (month == "june")
    days = 30;
  else if (month == "november")
    days = 30;
  else
    days = 31;

  cout << month << " has " << days << " days" << endl;

  return 0;
}

// Ex. Rewrite the cascading if/else statement of this program
//     using one single if/else.
//     (Hint: Make use of logical operators)

// Remark: the program structure 
//				if ...
//				else if ...
//				else if ...
//				else ...

// is actually eqaual to:
//				if ...
//				else {
//					if ...
//					else {
//						if ...
//						else ...
//					}
//				}
