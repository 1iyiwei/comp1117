#include <iostream>
#include <cmath>
using namespace std;

// pre: n > 0
// post: return true if and only if n is a prime number 
bool isPrime(unsigned n)
{
  if (n == 1) 
    return false;
  if (n == 2) 
    return true;
  if (n % 2 == 0) 
    return false;
  
  unsigned tester = 3;

  unsigned sqrt_of_n = static_cast<unsigned>(sqrt(n)+0.5);
  //  unsigned sqrt_of_n = (sqrt(n)+0.5);
  
  while (tester <= sqrt_of_n )
  {
    if ( n % tester == 0)
      return false;
    tester = tester + 2;
  }
  
  return true;
}

int main(void)
{  
  unsigned x = 1;

  while(x > 0)
  {
      cin >> x;
      if(x > 0)
          cout << x << (isPrime(x) ? " is prime" : " is not prime") << endl;
  }

  return 0; 
}


// For any number n, if n is not a prime, then n
// has a factor no more than the square root of n.
// Proof:
// Assume to the contrary that all factors of n is
// bigger than sqrt(n).  Let p, q be any two of them
// Then p times q is bigger than n.  We arrive at
// a contradiction. Q.E.D








  

