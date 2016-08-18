#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    unsigned int x = static_cast<unsigned int>(pow(2.0, 31) + 2);
    int y = -1;
    // unsigned int y = -1;

    if(x > y)
    {
        cout << "Yes, " << x << " > " << y << endl;
    }
    else 
    {
        cout << "No, " << x << " <= " << y << endl;
    }

    return 0;
}
