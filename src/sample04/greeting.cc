// This program demonstrates the usage of char type 

#include <iostream>
#include <string>

int main(){
  using namespace std;
	
	cout << "please enter your surname: ";
	
	string surname;
	cin >> surname;
	
	cout << "please enter your sex [M/F]: ";
	// getting char input is just similar to other data types.
	char sex;
	cin >> sex;
	
	cout << "Are you married? [Y/N]: ";
	
	char marry;
	cin >> marry;
	
	cout << "Welcome ";
	//use logical operator AND to combine two boolean expressions
	if((sex == 'F') && (marry == 'Y'))				
		cout << 'M' << 'r' << 's' << '.' << surname << endl;
	else if((sex == 'F') && (marry == 'N'))
		cout << 'M' << 'i' << 's' << 's' << '.' << surname << endl;
	else if(sex == 'M')
		cout << 'M' << 'r' << '.' << surname << endl;
		
	return 0;
}

// remark: we use single quote to specify a char. 
