// This program show the precision problem in computer 
#include <iostream> 
using namespace std;  

int main() 
{
  cout << 0.1 - 0.025 - 0.075   << endl ;  // zero?
  cout << 0.1 - (0.025 + 0.075) << endl;   // zero?

  cout << (1.0/99.0*99.0 == 1) << " " << (1.0*99.0/99.0 == 1) << endl;

  {
      double foo = 99;
      double bar = 99;

      cout << (1.0/foo*bar == 1) << " " << (1.0*foo/bar == 1) << endl;
  }

  {
      const double foo = 99;
      const double bar = 99;

      cout << (1.0/foo*bar == 1) << " " << (1.0*foo/bar == 1) << endl;
  }

  return 0;
}

// Why?
