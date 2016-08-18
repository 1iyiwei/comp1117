#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double number = 1234.56789;

    cout.setf(ios::scientific);
    cout.precision(7);
    cout << number << endl;

    cout.setf(ios::fixed);
    cout.precision(7);
    cout << number << endl;

#if 0
    cout.setf(ios::scientific);
    cout.precision(7);
    cout << number << endl;
#endif

    cout << setiosflags(ios::showpoint | ios::fixed) << setprecision(3) << 123.456789 << endl;

    return 0;
}
