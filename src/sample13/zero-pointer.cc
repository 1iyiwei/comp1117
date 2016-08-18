#include <iostream>
using namespace std;


int main(void)
{
  cout << "Alive ..." << endl;
  
 int x (27);
  int y (10);

  int * ptr (&x);   // ptr points to x

  int * qtr = 0;    // qtr points to "nothing"
  //  cout << *qtr << endl;   // program crash!! at this statement 
  
  // int *qtr (&y);  // qtr points to y

  cout << "Okay, i'm here ... " << endl;
  
  // cout << *qtr << endl;   // segmentation fault!!!

  cout << endl;

  if (ptr != 0) 
    cout << "ptr points to something and *ptr is " << *ptr << endl;
  else  // ptr == 0
    cout << "ptr points to nothing" << endl;

  if (qtr != 0)
    cout << "qtr points to something and *qtr is " << *qtr << endl; 
  else
    cout << "qtr points to nothing" << endl;

  if (ptr != 0 && qtr != 0)   // both ptr and qtr point to something
    cout << "Then *ptr + *qtr = " << *ptr + *qtr << endl;

  // What happen if the following statements are executed?
  //   int * zeroptr (0);
  //   int k = *zeroptr;

  return 0;
}
