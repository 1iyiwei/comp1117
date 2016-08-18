#include <iostream>
using namespace std;

int main(void)
{
  cout << "How big is the array?" << endl;
  int n;
  cin >> n;

  int * p = new int[n];      // create a dynamic array with n entries

  for (int i = 0; i < n; ++i)
    p[i] = i * i;
  
  cout << "here it is:";
  for (int i = 0; i < n; ++i)
      cout << " " << p[i];
  cout << endl;

  // use "delete []" to remove a dynamic array

  delete[] p;
  
  return 0;
}

  
