// This program illustrate the differences between
// value parameters and reference parameters.

#include <iostream>

void swap_ref( int &x,  int &y)  // reference parameters
{
  int temp (x);
  x = y;
  y = temp;
} 

void swap_value( int x, int y )  // value parameters
{
  int temp (x);  
  x = y;        
  y = temp;    
}  


int main(void)
{
  using namespace std;

  int a, b;
  cin >> a >> b;    

  // to exchange the contents of a and b

  
  swap_value( a, b ); 

  cout << a << '\t' << b << endl;  

  swap_ref( a, b );  
  cout << a << '\t' << b << endl; 

  swap_value( b, a );
  cout << a << '\t' << b << endl;
  
  swap_ref( b, a ); 
  cout << a << '\t' << b << endl;

  return 0;
}

  
