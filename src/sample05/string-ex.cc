// Program illustrating string operations & member functions.

#include <iostream>
#include <string>
using namespace std;

int main(){

	string r = "creative process";  // when r is created, it's contents
	// is "creative process"
	string s  ("programming is");  // another form of initialization
	string t ("a");  
	string u(r);

	//  string t = "a";

	int len_s = s.length();  // 14 // length() member function (method)

	// s.length() returns the no. of characters in s.
	// ===> can be imagined that it is length(s)
	int len_t = t.length(); // 1
	int len_r = r.length(); // 16  // .length is defined in the string library

	if (t.length() > len_s) 
		cout << "t is longer than s" << endl;
    
	cout << "Strings length: " << len_s << endl;   // 14
	cout << "Strings length: " << len_t << endl;   // 1
	cout << "Strings length: " << len_r << endl;   // 16

	string w = s + t + r;      // string concatenation
	// "programming isacreative process"

	cout << "String concatenation: " << w << endl;
  
	w = s + " " + t + " " + r;   // concatenation involving string literals
	// "programming is a creative process"
  
	cout << "String concatenation: " << w << endl;
 
	string temp("hello");
  
	w = temp + " world";
  
	cout << "String concatenation: " << w << endl;  // hello word

	w = s.substr(0,7);		// substr is a member function to extract substrings
	// extracted 7 characters from position 0, ie. w = "program" 
	
	cout << "Substrings w of s: " << w << endl;
	
	w = r.substr(0, 8);
	cout << "Substrings w of r: " << w << endl;
	
	// treating the string returned from substr is just a normal string
	w = t + " " + r.substr(0,8) + " " + s.substr(0,7);	 
	
	cout << "Substrings concatenation: " << w << endl;
	
	w = " "; // empty string?  It's a string with a single character, which
	// w is NOT empty in this case
	// it has one character, which is a space


	w = "";
	// Yes, this is a string is zero no. of character
	// => it's an empty string

	// is a space.
	if (w.empty()) // .empty() return true/false
		cout << "w is an empty string" << endl;
	else
		cout << "w is not an empty string" << endl;

	w.clear();                // OR w = "";  // an empty string literal
	cout << "The content of w is: " << w << endl;

	if (w.empty()) // is true right now
		cout << "empty" << endl;
	else
		cout << "w is not an empty string" << endl;
  
	cout << "The content of w is: " << w << endl;


	return 0;
}

// s.length() return size_t, sort of integral type
// size_t is more accurate than int for len_s & len_r
