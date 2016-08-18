#include <iostream>
#include <string>
using namespace std;

int main(void)
{

  int x = 25;
  double y = 3.1416;
  string MyName = "Markus";
  int a[3] = { 99, 45, 68 };

  cout << "Address    content" << endl;
  cout << (& x) << ' ' << x << endl;       // "&x" is an expression 
  //                                        ==> the address of x in the memory
  //  what's the type of "&x"?
  //  ... int is a reasonable guess
  // ... but

  //  int ax = &x;   // we can't use an int variable to store the address of
  // x!!!!

  // The type of the value is called "pointer".
  // To be more precise, it is of type
  ///    "pointer to int"
  
  int * px;
  // 1. name is "px"
  // 2. type is "int *",  pointer to int
  // 3. value (contents)
  px = &x;
  // if "&x" is 0xbbbbf2e,
  ///    px contains that value


  // how to store the address of v, which is a double
  // but ... C/C++ is picky about type
  // px = &y;    is invalid

  double * py;  // ay is of type "pointer to double"
  // 1. py is a variable, name equals "py"
  // 2. type is "pointer to double" (double *)
  py = &y;
  
  cout << px << ' ' << py << endl;
  
  string * aname;  
  // 1. name is "aname"
  // 2. type is "pointer to string" (string *)
  aname = &MyName;
  

  cout << &y << ' ' << y << endl;
  cout << &MyName << ' ' << MyName <<endl;
  cout << &a[0] << ' ' << a[0] << endl;
  cout << &a[1] << ' ' << a[1] << endl;
  cout << &a[2] << ' ' << a[2] << endl;

  return 0;
}
