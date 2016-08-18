#include <iostream>
using namespace std;

int main(void)
{    
    int x = 24, y = 24;
    int * p = &x,  * q = &y;
    if(*p == *q) cout << "Yes 1" << endl;
    if(p == q) cout << "Yes 2" << endl;
    x = 36;
    if(*p == *q) cout << "Yes 3" << endl;
    if(p == q) cout << "Yes 4" << endl;
    q = &x;
    if(*p == *q) cout << "Yes 5" << endl;
    if(p == q) cout << "Yes 6" << endl;
    if(&p == &q) cout << "Yes 7" << endl;
    if(&*p == &*q) cout << "Yes 8" << endl;
    if(*&p == *&q) cout << "Yes 9" << endl;

    return 0;
}
