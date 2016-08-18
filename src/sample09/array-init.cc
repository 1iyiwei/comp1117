#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int a[8] = { 2, 3, 5, 7, 11, 13, 17, 19 };
  for (int i = 0; i < 8 ; ++i)
    cout << a[i] << ' ';
  cout << endl;

  double b[10] = { 1.65, 2.14, 3.1416, 54.12 }; 
  // b[0] is 1.65, b[1] is 2.14 ..., b[4] = 0.0 (some default value)
  // b[4] -- b[9] are 0s
  for (int i = 0; i < 10; ++i)
    cout << b[i] << ' ';
  cout << endl;

  int c[][3] = { {1, 0, 4}, {-1, 1, 2}};
  for (int i = 0; i < 2; ++i){
    for (int j = 0; j < 3; ++j)
      cout << c[i][j] << ' ';
    cout << endl;
  }

  string command[] = {"ls", "touch", "rm", "cd", 
		      "mkdir", "rmdir", "pwd", "exit"};
  int N = sizeof(command) / sizeof(string);
  //  int N = sizeof(command) / sizeof(command[0]);

  for (int i = 0; i < N; ++i)
    cout << command[i] << " ";
  cout << endl;
  
  return 0;
}

// sizeof() is a keyword of c++
//
// sizeof(variable) determine the total memory usage of that variable
// sizeof(type) reports the size of a single variable of that type.
//
// commonly used for determining the size of an array created with 
// initialization 
