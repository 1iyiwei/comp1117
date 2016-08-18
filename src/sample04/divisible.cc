// This program checks if the input number is divisible by 2 and/or 3.

#include <iostream>
#include <string>

int main(){
  using namespace std;

  cout << "enter a number: ";

  int x;
  cin >> x;

	if(x%2 == 0){
	
		// This if/else statement is nested to the 
		// if-part of the outer if/else statement
		if(x%3 == 0)																						 		
			cout << "It is divisible by both two and three\n";	
				 
		else 																									
	  	cout << "It is divisible by two only\n";
	  	
	}else {
	
		// This if/else statement is nested to the
		// else-part of the outer if/else statement
		if(x%3 == 0)																						
			cout << "It is divisible by three only\n";			
						
		else 
			cout << "It is not divisible by any two or three\n";
			
  }
  
  return 0;
}
