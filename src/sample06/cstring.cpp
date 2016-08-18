#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(void)
{
    char short_string[]="abc";

    char shrot_string[]={'a','b','c'};

    cout << "short_string[]: " << strlen(short_string) << ", " << sizeof(short_string)/sizeof(char) << endl;

    cout << "shrot_string[]: " << strlen(shrot_string) << ", " << sizeof(shrot_string)/sizeof(char) << endl;

    return 0;
}
