// Recursive and iterative approach for computing
// exponentiation

#include <iostream>
using namespace std;

double Exp_loop(double x, int n)
{
  double result = 1;
  for (int i = 0; i < n; ++i)
    result *= x;
  return result;
}

// recursion is good :-)

double Exp(double x, int n)
{
  if (n == 0)
    return 1;
  else
    return x * Exp(x, n-1);
}

// A faster approach
double FastExp(double x, int n)
{
  if (n == 0)
    return 1;

  double semi = FastExp(x, n/2);
  if (n % 2 == 0)
    return semi * semi;
  else
    return x * semi * semi;
}

int main(void)
{
  double number;
  int exp;

  cout << "enter base and exponent" << endl;
  cin >> number >> exp;
  cout << "Loop version : " << Exp_loop(number, exp) << endl;
  cout << "Slow version : " << Exp(number, exp) << endl;
  //  cout << "Fast version : " << FastExp(number, exp) << endl;
  // system("pause");

  return 0;
}


