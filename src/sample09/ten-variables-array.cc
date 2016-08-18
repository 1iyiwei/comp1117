// Using array to simplify the program and make it more
// easy to extend and maintain.

#include <iostream>
#include <cmath>
using namespace std;

// find the mean and standard deviation of 10 input numbers

double square(double x)
{
    return x * x; 
}

int main(void)
{  
  const int NUM_INPUT = 10;

  int y[NUM_INPUT]; 

  cout << "Please input " << NUM_INPUT << " numbers :";
  for (int i = 0; i < NUM_INPUT; ++i)
    cin >> y[i];  

  double total = 0.0;
  for (int i = 0; i < NUM_INPUT; ++i)
    total += y[i]; 
  
  double mean = total / NUM_INPUT;
  cout << "Mean: " << mean << endl;
  
  double sum_var = 0.0;
  for (int i = 0; i < NUM_INPUT; ++i)
    sum_var += square(mean - y[i]);

  double std_dev = sqrt( sum_var / NUM_INPUT );
  cout << "Standard deviation: " << std_dev << endl;
  
  return 0;
}

  //
  // sum_var = (mean - y[0]) * (mean - y[0]) 
  // + (mean - y[1]) * (mean - y[1])
  // + ....
  // + (mean - y[NUM_INPUT - 1]) * (mean - y[NUM_INPUT -1])
