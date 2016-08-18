#include <iostream>
using namespace std;

int main(void)
{
    // output bool
    bool bool_true = true;
    bool bool_false = false;

    cout << "true: " << bool_true << ", false: " << bool_false << endl;

    // int to bool
    bool_true = 100;
    bool_false = 0;

    cout << "true: " << bool_true << ", false: " << bool_false << endl;

    // bool to int
    int int_true = true;
    int int_false = false;

    cout << "true: " << int_true << ", false: " << int_false << endl;
    
    // done
    return 0;
}
