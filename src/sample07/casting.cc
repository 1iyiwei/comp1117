// This program illustrates one of the usage of casting. 

#include <iostream>

int main(void)
{
    using namespace std;
    int integer1 = 10;
    int integer2;
    double double1 = 12.3;
    double double2;
    bool boolean1 = false;
    bool boolean2;
    char char1 = 'c';
    char char2;
  
    integer2 = static_cast<int>(double1); // casting a double into int
    cout << "double value = " << double1 << ", casting to int as " 
         << integer2 << endl; // ineger2 = 12 
    
    integer2 = static_cast<int>(boolean1);	// casting a bool into int
    cout << "bool value = " << boolean1 << ", casting to int as " 
         << integer2 << endl; // ineger2 = 0 
    
    integer2 = static_cast<int>(char1);
    cout << "char value = " << char1 << ", casting to int as " 
         << integer2 << endl; // ineger2 = 99 
  
    double2 = static_cast<double>(integer1); // casting a int into double
    cout << "integer value = " << integer1 << ", casting to double as " 
         << double2 << endl; // double2 = 10 
  
    double2 = static_cast<double>(boolean1);	// casting a bool into double
    cout << "bool value = " << boolean1 << ", casting to double as " 
         << double2 << endl; // dobule2 = 0 
  
    double2 = static_cast<double>(char1);
    cout << "char value = " << char1 << ", casting to double as " 
         << double2 << endl; // double2 = 99 
  
    boolean2 = static_cast<bool>(integer1);	// casting a int into bool
    cout << "integer value = " << integer1 << ", casting to bool as " 
         << boolean2 << endl; // boolean2 = 1 

    boolean2 = static_cast<bool>(double1);	// casting a double into bool
    cout << "double value = " << double1 << ", casting to bool as " 
         << boolean2 << endl; // boolean2 = 1

    boolean2 = static_cast<bool>(char1);	// casting a char into bool
    cout << "char value = " << char1 << ", casting to bool as " 
         << boolean2 << endl; // boolean2 = 1 
	
    integer1 = 99;
    char2 = static_cast<char>(integer1);	// casting a int into char 
    cout << "integer value = " << integer1 << ", casting to char as "
         << char2 << endl; // char2 = c
	
    double1 = 100.1;
    char2 = static_cast<char>(double1);	// casting a double into char 
    cout << "double value = " << double1 << ", casting to char as "
         << char2 << endl; // char2 = d

    // the double value is cast to int first and then convert to char 
    // base on the ASCII character set

    return 0;
}

  
