#include <iostream>
#include <stdlib.h>
using namespace std;

int Convert(string & input)
{
    int output = atoi(input.c_str());
    return output;
}

int main(void)
{
    string input;
    
    cout << "enter a number" << endl;
    cin >> input;

    int output = Convert(input);

    cout << input << " : " << output << endl;

    return 0;
}
