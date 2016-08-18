// Program reading a string and two indices, x and y,
// the sub-string of length y starting at position x is returned.

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string r;
    int x, y;
  
    cout << "Please input a string: ";
    cin >> r;
    cout << "\nPlease input two indices: ";
    cin >> x >> y;
    
    string s;
    s = r.substr(x, y);
    cout << "The substring starting at position " << x 
         << " with length " << y << " is: " << s << endl;
    
    return 0;
}
