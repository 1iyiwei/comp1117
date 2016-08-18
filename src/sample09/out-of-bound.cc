#include <iostream>
using std::cout;
using std::endl;

// overhead
// cost: time, memory, ..

int myfunc(int x)
{ 
  int p[5] = { -2, -3, -5, -7, -11 };
  int a[5] = { 2, 3, 5, 7, 11 };
  int q[5] = { 100, 101, 102, 103, 104 };  
  int total = 0;
  for (int i = 0; i < x; ++i)
  {
    total += a[i];
    cout << a[i] << endl;       // accessing something out-of-bound!!!
    a[i] = -a[i];    //!!
    
  }  // stepping on the toe of the other

  for (int i = 0; i < 5; ++i)
  {
    cout << a[i] << "\t" << p[i] << "\t" << q[i] << endl;
  }
  
  
  // 1. error cannot be detected at compile time
  // 2. the program may not crash!!!
  // 3. in this case, what is value of a[i], for i >= 5?

  return total;
}
      
int main(void)
{
  int x;
  cout << "enter the number of elements to invert" << endl;
  std::cin >> x;

  cout << "output below" << endl;
  int t = myfunc(x);
  //  cout << t << endl;
  // system("pause");

  return 0;
}
