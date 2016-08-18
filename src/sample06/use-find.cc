// Sample use of member function find()

// Input: a URL
// Output: the server address
 
#include <iostream>
#include <string>
using namespace std;  

int main(void)
{
    cout << "Enter a URL: ";   // 
    string url;                //     
    cin >> url;                //      http://www.cs.hku.hk/~c1117a

    int colon_pos = url.find(":");    // 4
    if (colon_pos == string::npos)
    {
        cout << "Error: invalid URL! It should be in the format <protocol>:..." << endl;
        return 0;   // Bye Bye!
    }

    // there is a colon  
    string protocol = url.substr(0, colon_pos); // http                  
    string temp = url.substr(colon_pos + 1);    // chop off the protocol part
    //  //www.cs.hku.hk/~c1117a                  
    if (temp.find("//") != 0)
    {
        cout << "Error: invalid URL! The format should be <protocol>://..." << endl;
        return 0;
    }

    //  //www.cs.hku.hk/~c1117a                  
    temp = temp.substr(2);             // chop off the "//"
    //  www.cs.hku.hk/~c1117a                  
    int next_slash = temp.find("/");
    
    string server;
    //  www.cs.hku.hk
    if (next_slash == string::npos)
        server = temp;
    else
        server = temp.substr(0, next_slash);
    
    cout << "The website is: " << server << endl;
    
    return 0;
}


  
  
  
  
    
  
  
