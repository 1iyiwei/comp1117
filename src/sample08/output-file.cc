#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    // create a file stream variable for output...
    ofstream target;
    target.open("myresult.txt");	// open the file "myresult.txt" for writing
    // target is a variable
    // type: ofstream       // output file stream
    // target <----> "myresult.txt"
    // target << x;         // similar to cout
	
    cout << "The following outputs send to the file ...." << endl;
    target << "Now this line should belong to the file" << endl;

    //   target << "We can also print the value of expressions such as:" 
    // 	 << "3 + 4 = " << 3 + 4 << endl;
	
    cout << "Flag size: ";
    int n;
    cin >> n;
	
    target << "Printing a flag with size " << n << endl;
	
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            if (i == 0 || i == n-1 || j == 0 || j == n -1)
                target << "*";
            else if (i == j || i + j == n - 1)
                target << "*";
            else 
                target << " ";
        target << endl;
    }
	
    target << endl << endl << "Bye bye!" << endl;
    target.close();

    return 0;
}

  
