#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main(void)
{
    ofstream outfile;
    ostringstream filename;
    
    for(int i=0; i<9; i++) 
    {
        filename.str("");
        filename << "test" << setw(3) << setfill('0') << i << ".txt";
        string current_name = filename.str();

        outfile.open(current_name.c_str());

        if (outfile.fail()) 
        {
            cout << "cannot open "<< current_name << endl;
        }
        else
        {
            cout << "opened " << current_name << endl;
        }

        outfile << i;
        outfile.close();
    }

    return 0;
}
