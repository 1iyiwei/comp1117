#include <iostream>

int main(void)
{
  using namespace std;
  
  int num;
  
  cout << "Enter num: ";
  cin >> num;   

  int start = 0;

  // prints all even numbers starting from 2 up to num
  while ( start != num )
  { 
    start = start + 2;            
    cout << start << endl; 
  } 

  cout << endl;
  
}

// what would happen if the input num is add number?
// what's the problem of the loop? fixable?

