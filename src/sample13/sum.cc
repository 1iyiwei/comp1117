#include <iostream>
using namespace std;

int sum(int x[], int n)
{
  if (n==0) return 0;
  else return x[0]+sum(&x[1], n-1);
  }

int main()
{
	int x[10];

	for (int i=0; i<10; i++) x[i]=i;
	cout << sum(x,10) << endl;
	}
