#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(void)
{
    string line, line2;
    ifstream infile;
    int age;
    istringstream instream;
    infile.open("myfile2.dat");
    
    while(getline(infile, line)) 
    {
        instream.clear();
        age=0;

        int idx=line.find("Age:");
        line2=line.substr(idx+4);

        instream.str(line2);
        cout << "instream.str() is " << instream.str() << endl;

        instream >> age;
        cout << "Age is " << age << endl;
    }

    return 0;
}
