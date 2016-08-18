#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string foo = "this is a test";
    string bar = "hello world";

    cout << sizeof(foo) << " " << sizeof(bar) << endl;

    return 0;
}
