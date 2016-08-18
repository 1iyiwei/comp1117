#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    /*
      string literals cannot be compared directly
      It's a valid expression in the language, but not what we want!
      (Because they are not really "string"; will explain later.)
    */

    if ("zebra" < "ant")
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    string zebra = "zebra";
    string ant = "ant";

    if (ant < zebra)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
