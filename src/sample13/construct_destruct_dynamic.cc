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

    Foo * foop = new Foo(2);

    {
        Foo foo1(1);
    }

    delete foop;
    foop = 0;

    return 0;
}
