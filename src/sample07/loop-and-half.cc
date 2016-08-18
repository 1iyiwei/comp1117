#include <iostream>

int main(void)
{
    using namespace std;

    int sum = 0;  
    int num;

    //    Quasi-infinite solution

    while(true)
    {
        cout << "Enter a number (0 to end) : ";
        cin >> num;
        if (num == 0) 
            break;  // break statement
    
        sum += num;
    }

    // Comparing this version without using break
/*
    cout << "Enter a number (0 to end) :";
    cin >> num;

    while(num != 0)
    {
        sum += num;
        cout << "Enter a number (0 to end) : ";
        cin >> num;
    }
*/

    // do-while version
/*
    do
    {
        cout << "Enter a number (0 to end) : ";
        cin >> num;

        if(num != 0)
            sum += num;
    }
    while(num != 0);
*/

    cout << "Sum : " << sum << endl;

    return 0;
}

  



