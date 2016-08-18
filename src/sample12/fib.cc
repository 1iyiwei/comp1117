// 0 1 1 2 3 5 8 13 21 ...
// F(n) = F(n-1) + F(n-2), n >= 2, F(0) = 0, F(1) = 1
// F(100) = (1.6st)^100

#include <iostream>
using namespace std;

unsigned long long Fib(int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;
  return Fib(n-1) + Fib(n-2);
}

unsigned long long Fib_iter(int n)
{
  if (n==0) return 0;
  if (n==1) return 1;
  unsigned long long F_a = 0, F_b = 1;
  int i = 1;
  while (i <= n)  // iterate for only n times (very efficient)   
  {
    unsigned long long temp = F_a;  
    F_a = F_a + F_b;
    F_b = temp;
    ++i;
  }
  return F_a;
}
  

int main(void)
{
  cout << "Enter a number: ";
  int input;
  cin >> input;

  cout << "Using iteration:" << endl;
  cout << "r : F(" << input << ") = " << Fib_iter(input) << endl;
  cout << "Using recursion:" << endl;
  cout << "r : F(" << input << ") = " << Fib(input) << endl; 

  return 0;
}
