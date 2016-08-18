// This program determines whether a year is a leap year.
// This program is similar to leap-year.cc except we use
// boolean variable is used to hold the intermediate result.

#include <iostream>

int main(void)
{
  using namespace std;

  cout << "Enter the year: ";
  int year;
  cin >> year;

  bool is_leap;

  // Check if the year is a leap year.
   if (year % 4 == 0)
   {
     if (year % 100 == 0)
     {
         if (year % 400 == 0)
             is_leap = true;
         else
             is_leap = false;
     }
     else
         is_leap = true;
   }
   else
       is_leap = false;

  if (is_leap == true) // but still fine
      cout << "Yes, it's a leap year." << endl;
  else
      cout << "No, it's not a leap year." << endl;

  return 0;
}

