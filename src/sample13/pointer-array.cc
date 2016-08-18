#include <iostream>
using namespace std;

void f(int b[], int size){  // print the content of this array with size elms
  for (int i = 0; i < size; ++i)
    cout << b[i] << endl;
}

int main(){
  int a[10];  // a[i] are garbage value
  for (int i = 0; i < 10; ++i){
    a[i] = i * i;
  }
  
  f(a, 10);  // print out a[0], ..., a[9]

  // a [ 0 1 2 3 4 5 6 7 8 9 ]
  //             p-^             // it seems that we have a subarray p[]
  int * p = &a[5];       // p points to the first element of a (i.e., a[0])
  f(p, 5);  

  cout << *p << endl;   // 25
  cout << p[0] << endl;
  
  cout << &(p[3]) << endl; 

  for (int i = 0; i < 5; ++i)
    cout << p[i] << endl; 
  
  int y = 5;
  int x = 4;
  int z = 6;
  int * q = &x;          // q points to x and *q is an alias of x
  cout << q[0] << endl;  //  *q
  cout << q[1] << endl;  /// the expression itself is valid
  cout << q[3] << endl;  /// what happen?
  q[3] = 0;
  
  
  return 0;
}
