// Recursive functions for array

#include <iostream>
using namespace std;

int sum_rec(int v[], int lower, int upper){
  if (lower > upper)
    return 0;
  return v[lower] + sum_rec(v, lower + 1, upper);
}

int sum_array(int v[], int size){
  return sum_rec(v, 0, size - 1);
}

int main(){
  int myarray[5] = {4, 7, 11, 2, 16};

  cout << sum_array(myarray, sizeof(myarray)/sizeof(int)) << endl;

  return 0;
}
