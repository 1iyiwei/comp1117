#include <iostream>
using namespace std;

class Foo
{
public:
    Foo(int data) // constructor
        {
            _data = data;
            cout << "Foo(" << _data << ")" << endl;
        };

    ~Foo(void) // destructor
        {
            cout << "~Foo(" << _data << ")" << endl;
        };

protected:
    int _data;
};

int main(void)
{
    Foo foo0(0);

    {
        Foo foo1(1);
    }

    return 0;
}
