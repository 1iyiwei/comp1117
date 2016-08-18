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
  int * p = new int (12);  // an int variable is created out of free store
  // it is pointed to by p
  double * q (new double (3.14)); // a double variable is created...

  cout << "*p" << "\t" << *p << "\t*q\t" << *q << endl;
  cout << "*p + *q =" << "\t" << *p  + *q << endl;

  string * s = new string ("hello"); // ...
  cout << "*s" << "\t" << *s << endl;

  Rational t = { 5, 3 };
  Rational * rp =  new Rational(t);
  cout << "rp->numer" << "\t" << rp->numer << "\t"
       << "rp->denom" << "\t" << rp->denom << endl;
}

int main(void)
{
  f();
  // the four dynamic variables are still there
  f();
  // another four dynamic variables are created
  // i.e., 8 variables in total
}
