#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double input = 0;

    cout << "Input a number" << endl;
    cin >> input;

    cout << "The formatted number is " << setiosflags(ios::fixed) << setprecision(1) << input << endl;

    return 0;
}
