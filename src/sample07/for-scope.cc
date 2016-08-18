// This program illustrates the scope of the loop-variable of for-loop
#include <iostream>

int main(void)
{
  using namespace std;
  
  for (int i = 0; i < 10; ++i)
  {
    cout << i << endl;
  }

  cout << i << endl;   // undefined variable...

  return 0;
}
