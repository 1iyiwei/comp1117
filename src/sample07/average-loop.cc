// An example to illustrate the usage of while-loop to execute
// a group of statements repeatedly.

#include <iostream>

int main(){
	using namespace std;
	
	int no_of_inputs = 0;
	double total = 0;
	int x;
	cout << "Enter a sequence of non-negative numbers (-1 to stop): ";
	cin >> x;
	while (x >= 0){			// the while-condition
	  no_of_inputs = no_of_inputs + 1;		// the while-body
	  total = total + x;
	  cin >> x;
	}
	
	double average = total / no_of_inputs;
	cout << "The average of the " << no_of_inputs 
	     << " numbers is " << average << endl;
	
	return 0;
}

  
  
