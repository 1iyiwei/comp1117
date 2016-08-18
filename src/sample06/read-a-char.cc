// Program illustrating the usage of getchar, which getting one character 
// at a time from the input, a space is also treated as a character. 

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << "please input a sequence of characters: ";
    char a;
    int count = 1;
    a = getchar();
    // a = cin.get();

    // you will learn the while-statement at the next lecture
    // the statements inside the while body will be exectued repeatly 
    // untill the condition is false.
    while( a != '\n')
    {
        cout << "character at position " << count
             << " is: " << a << endl;
        a = getchar();
        // a = cin.get();

        count++;
    } 
	
    return 0;
}
