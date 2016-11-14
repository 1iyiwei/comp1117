#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int x = 34;
    double y = 12.3;
    string name("Peter");
    
    int * ptr = &x;
    double * dptr = &y;
    string * sptr = &name;

    cout << x << endl;
    cout << ptr << ", " << &x << endl;

    // done
    return 0;
}
