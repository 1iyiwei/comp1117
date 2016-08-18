#include <iostream>
using namespace std;

struct Rational 
{
  int numer;
  int denom;
};

int main(void)
{
  Rational myrat = {5, 3};     // myrat.numer gets 5 and myrat.denom gets 3
  Rational * rptr (&myrat); // rptr points to myrat

  cout << "(*rptr).numer: " << (*rptr).numer  // 5
       << "\t(*rptr).denom: " << (*rptr).denom << endl; // 3

  int temp = rptr->numer;    // (*rptr).numer
  rptr->numer = rptr->denom; // (*rptr).numer = (*rptr).denom
  rptr->denom = temp;       //  (*rptr).denom = temp

  cout << "rptr->numer: " << rptr->numer 
       << "\trptr->denom: " << rptr->denom << endl;
}

