#include <iostream>
using namespace std;

int main(void) 
{
  string n = "Markus";
  string * sptr = &n;
  *sptr = "Help";
  // *sptr is an alias of n
  //      n[0]
  cout << n[0] << endl;
  //  cout << *sptr[0] << endl;
  cout << (*sptr)[0] << endl;
  // the dereference operator has lower priority then subscript
  //   *sptr[0]  <==> *(sptr[0])
  //   (*sptr)[0]

  

  int x = 1,       // suppose the address of x is "0x298374"
    y = 9;            
  int * ptr = &x; // ptr stores the address of x
  //                e.g.s ptr contains "0x298374"

  //      x |  1  | <--------.
  //      y |  9  | 0x932842 |
  //                         /
  //    ptr | &x  | ---------
  //  the expression "*ptr" means "dereference" the pointer
    //  *ptr <=> x
    /// *ptr is an alias of x
    //  *ptr and x refer to the same entity
  //
  cout << "x : " << x << "\ty : " << y << "\t*ptr : " << *ptr << endl;
  //                1                9                     1              

  //      x |  23 | <--------.
  //      y |  9  | 0x932842 |
  //                         /
  //    ptr | &x  | ---------

  *ptr = 23; 
  // the same as 
  //      x = 23;
  cout << "x : " << x << "\ty : " << y << "\t*ptr : " << *ptr << endl;
  //                23               9                   23 


  ptr = & y ; 
  //      x |  23 | 
  //      y | 18  | <--------.
  //                         |
  //    ptr | &y  | ---------'
  *ptr = 2 * *ptr; 
  // *ptr is an alias of y
  // *ptr and y refer to the same entity
  //     2 * 9 
  //
  cout << "x : " << x << "\ty : " << y << "\t*ptr : " << *ptr << endl;
  //                23               18                  18
}
