#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile;
	int sum=0, x, count=0;

	infile.open("test.dat");
	while(infile>>x) {
		sum+=x;
		count++;
		}
	cout << "Number of entries :" << count << endl;
	cout << "Sum = " << sum << endl;
	return 0;
	}
