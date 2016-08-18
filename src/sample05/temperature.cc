// This program take a F-degree as input and output the temperature in C-degree
// Fahrenheit-to-Celsius conversion
//
// Make use of the well-known formula
//
// C =  5( degree_in_F - 32 )
//     ------------------------
//               9   

#include <iostream>
using namespace std;

// void -- the return type for specifying nothing to return 
void print_temperature(double t) 
{
    cout << "The temperature in Centigrade is: ";
    cout << t << endl;
}

int main(void)
{  
  cout << "enter temperature in degrees F. ";

  double F_degrees;     
  cin >> F_degrees;

  double C_degrees = (F_degrees - 32) * 5 / 9;    
                                               
  print_temperature(C_degrees);

  return 0;
}


