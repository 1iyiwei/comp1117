#include <iostream>
using namespace std;

int func(int & x, int y)
{
    x = x+y;
    return 5;
}

int main(void)
{
    {
        int x=1, y=2;
        cout << func(x, y) << ", " << x << endl;
    }
    
    {
        int x=1, y=2;
        cout << func(x, y) << ", ";
        cout << x << endl;
    }
}
