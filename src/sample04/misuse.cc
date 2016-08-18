// This program show another common problem of mixing up the  
// useage of different types of operators 

// The program can be compiled without any error/warning messages!
// But giving unexecpted results. 

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    cout << "Enter the first number: ";
    int x;
    cin >> x;
    
    cout << "Enter the second number: ";
    int y;
    cin >> y;
    
    cout << "Enter the third number: ";
    int z;
    cin >> z;
    
    if(x = y) // should use == instead
        cout << "the first number is equal to the second number\n";
	
    if ((x < y) & (x < z)) // mis-use the logical AND operator, 
        cout << "the first number is the smallest values among three\n";
		
    if ((x < y) | (x < z)) // mis-use the logical OR operator, 
        cout << "the first number is not the largest values among three\n";

    return 0;
}

