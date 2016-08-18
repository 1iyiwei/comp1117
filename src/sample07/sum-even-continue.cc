#include <iostream>

int main(){
  using namespace std;

  int sum = 0;  
  int num;
//    Quasi-infinite solution
//
  while ( true ){
    cout << "enter a number (0 to end) :";
    cin >> num;
    if (num == 0) 
      break;  // break statement
    if (num % 2 != 0)
      continue;
    sum += num;
  }

  cout << "Sum of the even numbers : " << sum << endl;

  return 0;
}

  



