// Another common usage of variable

#include <iostream>

int main()
{
  using namespace std;

  int x;  // the contents of x & y are garbage values
  int y;
  						 
  cout << "Enter two integers:";  		 
  cin >> x;   
  cin >> y;   
  cout << "The value of x is " << x << endl;	 
  cout << "The value of y is " << y << endl;     
  cout << "Let's exchange the content of x & y" << endl;

  // exchange the contents of x & y  

  int temp;  // buffer for the exhange   

  temp = x;   
  x = y;
  y = temp;
  
  // why not simply as follows?
  //
  //   x = y;
  //   y = x;

  cout << "Now ...." << endl;
  cout << "The value of x is " << x << endl;
  cout << "The value of y is " << y << endl;

  return 0;
}

// Note: See the usages of variables as temporary storage.
