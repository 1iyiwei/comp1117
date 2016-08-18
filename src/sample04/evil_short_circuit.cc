#include <iostream>
using namespace std;

int main(void)
{
    int count, total;

    cout << "enter the total and count " << endl;
    cin >> count >> total;

    if((count != 0) && (total/count < 60))
    //if((total/count < 60) && (count != 0))
        cout << "you need to work harder!" << endl;

    return 0;
}
