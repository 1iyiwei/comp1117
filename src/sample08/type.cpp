#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv)
{
    if(argc < 3)
    {
        cerr << "Usage: " << argv[0] << " input_file_name trials" << endl;
        return 1;
    }

    int arg_ctr = 0;
    const string input_file_name = argv[++arg_ctr];
    const int trials = atoi(argv[++arg_ctr]);

    ifstream input(input_file_name.c_str());

    int x;

    for(int i = 0; i < trials; i++)
    {
        cout << (input >> x) << " : ";
        cout << x << endl;
    }
}
