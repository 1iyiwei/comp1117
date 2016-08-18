// A program that can find the mean & standard deviation of 10
// input scores.

#include <iostream>
#include <cmath>
using namespace std;

const int NUM_INPUT = 10;

double square(double x)
{  
    return x * x;
}

// find the mean and standard deviation of 10 input numbers
int main(void)
{

  int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
  
  cout << "Please input 10 numbers :";
  cin >> x1 >> x2 >> x3 >> x4 >> x5
      >> x6 >> x7 >> x8 >> x9 >> x10;

  double total = 0.0;
  total = x1 + x2 + x3 + x4 + x5 
    + x6 + x7 + x8 + x9 + x10;
  
  double mean = total / NUM_INPUT;
  cout << "Mean: " << mean << endl;
  
  double sum_var = 
    square(mean - x1) + 
    square(mean - x2) + 
    square(mean - x3) + 
    square(mean - x4) + 
    square(mean - x5) + 
    square(mean - x6) + 
    square(mean - x7) + 
    square(mean - x8) + 
    square(mean - x9) + 
    square(mean - x10);
  
  double std_dev = sqrt( sum_var / NUM_INPUT );
  cout << "Standard deviation: " << std_dev << endl;
  
  return 0;
}
