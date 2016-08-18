#include <iostream>
#include <cmath>
const int SIZE=5;

using namespace std;

double mean(double x[], int n)
{
	double sum=0.0;

	for (int i=0; i<n; i++) sum += x[i];
	return (sum/n);
	}

double sd(double x[], int n)
{
	double m, sum, temp;

	m=mean(x, n);
	for (int i=0; i<n; i++) {
		temp=x[i]-m;
		sum += temp*temp;
		}
	return (sqrt(sum/(n-1)));
	}

int main()
{
	double x[SIZE];

	cout << "Enter " << SIZE  << " Numbers:" << endl;
	for (int i=0; i<SIZE; i++) cin >> x[i];
	cout << "The mean is " << mean(x, SIZE) << endl;
	cout << "The standard deviation is " << sd(x, SIZE) << endl;
	}
