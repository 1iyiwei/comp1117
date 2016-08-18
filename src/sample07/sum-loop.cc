// An example to illustrate the usage of while-loop to execute
// a group of statements repeatedly.

#include <iostream>

int main(){
	using namespace std;
	
	int no_of_inputs;
	int total = 0;
	int x;
	cout << "Enter a sequence of positive numbers (0 to stop): ";
	cin >> x;
	while (x > 0){			// the while-condition
		no_of_inputs = no_of_inputs + 1;	// the while-body
	  total = total + x;
	  cin >> x;
	}
	
	cout << "The sum of the " << no_of_inputs 
	     << " numbers is " << total << endl;
	
	return 0;
}

  
  
