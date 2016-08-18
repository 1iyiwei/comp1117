#include <iostream>
#include <fstream>     // for file access
using namespace std;

int main(void)
{
	
  ifstream myvar("myfile.dat");      // open the file "myfile.dat" for reading
  // myvar is a variable
  // type: ifstream       // input file stream
  // myvar <----> "myfile.dat"
  // myvar >> x;                    // similar to cin
	
  // find the sum of the numbers stored in myfile.dat
  int total = 0;
#if 1
  while (true)
  {	                  // .eof() member function test if all the data in 
    int x;	          //  the file has been read
    myvar >> x;		  // extract one int from the file stream
    if (myvar.eof())	  // if all data has been read, .eof() is true
      break;		  //    if yes, leave this while-loop
    total += x;		  //  if not, add this to the total
    cout << "A value from the file: " << x << endl;
  }
#else
  int x = 0;
  while(myvar >> x)
  {
      total += x;
      cout << "A value from the file: " << x << endl;
  }
#endif

  myvar.close();
  cout << "Sum of the numbers: " << total << endl;
	
}

  
