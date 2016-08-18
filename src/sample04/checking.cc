// This program checks if the input number is divisible by 2 and/or 3.

#include <iostream>
#include <string>

int main(void)
{
  using namespace std;

  cout << "enter a number: ";

  int x;
  cin >> x;
  
  if(x > 0)
  {
      // This if/else statement is nested to the 
      // if-part of the outer if/else statement 
      if(x % 2 == 0)	 		
          cout << "It is a positive even number" << endl;	
      else 				
          cout << "It is a positive odd number" << endl;
	  	
  }
  else
  {
      // This if/else statement is nested to the
      // else-part of the outer if/else statement
      if(x == 0)
          cout << "It is equal to zero" << endl;
      if(x % 2 == 0)		
          cout << "It is a non-positive even number" << endl;			
      else 
          cout << "It is a non-positive odd number" << endl;
  }
  
  return 0;
}
