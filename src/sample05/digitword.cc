#include <iostream>
#include <string>

using namespace std;

string digit_to_word(int digit)
{  
    // v. important comment
	
    // precondition: 0 <= digit <= 9
    // the programmer has to make sure the precondition satisfies
	
    // postcondition: 0 --> "zero", 1 --> "one", ..., 9 -> "nine"
	
    if ( digit == 1 )
        return "one";     // leave the sub-program at once and pass the
    // control back to the caller
	
    if ( digit == 2 ) 
        return "two";
    
    if ( digit == 3 ) 
        return "three";
    
    if ( digit == 4 )
        return "four"; 
    
    if ( digit == 5 )
        return "five";
    
    if ( digit == 6 ) 
        return "six";
    
    if ( digit == 7 ) 
        return "seven";   
    
    if ( digit == 8 ) 
        return "eight";
    
    if ( digit == 9 ) 
        return "nine";
    
    return "zero";  // not 1, 2, ..., 9, then "zero" is returned
}

int main(void)
{
    cout << "enter digit (0-9): ";
	
    int main_digit;     
    cin >> main_digit; 
	
    cout << digit_to_word( main_digit ) << endl; 
    //  cout << digit_to_word( 5.2 ) << endl;   // double -> int is allowed but
    //                                         the decimal part is ignored.
    //                    truncation 5.0 => 5
    //                               5.2 => 5
    
    //  cout << digit_to_word( -2 ) << endl;   // ??? 1. is valid
    //                                                2. logically incorrect
    
    return 0;
}


  
