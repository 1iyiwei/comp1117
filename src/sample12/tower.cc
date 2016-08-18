#include <iostream>
using namespace std;

void move(int ndisc, char fromstick, char tostick, char otherstick)
{
    if(ndisc <= 1)
    {
        cout << "Move from " << fromstick << " to " << tostick << endl;
    }
    else 
    {
        move(ndisc-1, fromstick, otherstick, tostick);
        move(1, fromstick, tostick, otherstick);
        move(ndisc-1, otherstick, tostick, fromstick);
    }
}

int main(void)
{
    int num_disks = 0;
    cout << "enter number of disks" << endl;
    cin >> num_disks;

    move(num_disks, 'A', 'C', 'B');

    return 0;
}

