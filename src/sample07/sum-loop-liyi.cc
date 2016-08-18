#include <iostream>
using namespace std;

int main(void)
{
    int total = 0;
    int x = 0;

    cout << "enter a bunch of positive numbers, terminated by a non-positive one" << endl;

    cin >> x;
    while (x > 0)
    {
        total = total + x;
        cin >> x;
    }
    
    cout << "the sum is: " << total << endl; 

    return 0;
}
