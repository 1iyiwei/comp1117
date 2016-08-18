// More examples on math related functions
#include <iostream>
using namespace std;

int sum(int n){
  // pre: n >= 0
  // post: return 1 + 2 + .. + n
  if (n == 0) 
    return 0;
  else
    return sum(n-1) + n;
}

int factorial(int n){
  // pre: n >= 0
  // post: return n * (n-1) * .. * 2 * 1
  if (n <= 1) // if (n == 0 || n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main(){
  cout << sum(10) << endl;
  cout << factorial(5) << endl;

  return 0;
}

  

