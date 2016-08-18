#include <iostream>
#include <string>
using namespace std;

struct Rational 
{
  int numer;    // numerator
  int denom;    // denominator
};

void f(void)
{
  int x;               // static
  new int (12);        // an int variable is created out of free store
  new double (3.14);   // a double variable is created...
  new string ("hello");// ...
  Rational t = { 3, 5 };
  new Rational(t);
}// go back to the caller...

int main(void)
{
  string x = "hello";
  string b = x + 'c';
  
  int a[10];

  f();
  // the four dynamic variables are still there
  f();
  // another four dynamic variables are created

  return 0;
}
