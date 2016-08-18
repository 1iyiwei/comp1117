// This program illustrates the simple usage of if-statement 
// It take an number as input and check if it is positive, zero or negative

#include <iostream>

int main(){
	using namespace std;
  
	int x;
	cout << "Please input an numnber\n";
	cin >> x;
  
	if(x > 0)																	// test expression 
		cout << "It is a positive number\n";		
		// only execute if test expression (x>0) is true
 
	if(x <= 0)																		// test expression
		cout << "It is a not a positive number\n";		
  	// only execute if test expression (x<=0) is true
  	
	return 0;
}
 
  // remark: We also called the test expression as Boolean-expression,  
  //				 which only contain true or false values.
  