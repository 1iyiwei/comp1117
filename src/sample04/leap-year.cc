// This program determines whether a year is a leap year.
// This is based on the well known formula:
// If a year is divisble by 4, it is a leap year; exceptions to
// this rule are years that are divisible by 100 but not by 400.

#include <iostream>
#include <string>

int main(void)
{
  using namespace std;

  cout << "Enter the year: ";
  int year;
  cin >> year;

  string answer;

  // Check if the year is a leap year. //   divisible by       |  leap year?
  if (year % 4 == 0)                   //   4     100     400  |
  {
    if (year % 100 == 0)	       // -----------------------------------
    {
      if (year % 400 == 0)	       //   N  	   ?   	   ?   |     N
	answer = "Yes";		       //   Y      N   	   ?   |     Y
      else			       //   Y      Y   	   N   |     N
	answer = "No";		       //   Y      Y       Y   |     Y
    } 
    else			       //      	       	       |
      answer = "Yes";		       //
  }				       //     ? - stands for don't care
  else				       //
    answer = "No";		       //

  cout << answer << endl;

  return 0;
}

