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

double f2c(double f) {
	return ((f-32)*5.0/9.0);
	}

void print_temperature(double t) {
	cout << "The temperature in Centigrade is: ";
	cout << t << endl;
	if( t > 30){
		cout << " It is very hot! " << endl;
		// the codes after, will be skipped if this return is executed. 
		return;					
		cout << " All statements after the return statement";
		cout << " won't be executed!" << endl;
	}
	if( t < 5){
		cout << " It is very cold! " << endl;
		return;
	}
	cout << " It is so cool! " << endl;
}
		
int main(){

  cout << "enter temperature in degrees F. ";

  double F_degrees;     
  cin >> F_degrees;

  double C_degrees = f2c(F_degrees);
                                                
  print_temperature(C_degrees);

  return 0;
}
