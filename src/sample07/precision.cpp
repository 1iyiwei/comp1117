#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    cout << "enter an integer" << endl;
    
    int x;
    cin >> x;

    cout << "sqrt(" << x << "*" << x << ") is " << static_cast<int>(sqrt(x*x)) << endl;

    return 0;
}
