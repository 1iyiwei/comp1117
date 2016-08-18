#include <iostream>
using namespace std;

int main(void)
{
    int x[10];
    int *p, *q;

    for (int i=0; i<10; i++) x[i]=10-i;
   
    p = x;
    
    for (int i=0; i<10; i++) cout << p[i] << " ";
    
    cout << endl;
    
    q=&x[0];
    
    if (p==q) cout << "yes";
    else cout << "no";
    cout << endl;
    
    p=&x[1];
    cout << p[2] <<endl;

    return 0;
}

