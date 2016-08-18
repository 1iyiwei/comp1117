#include <iostream>
using namespace std;

class Foo
{
public:
    Foo(void) : _value(0)
        {
            cout << "Foo(" << _value << ")" << endl;
        }

    Foo(int value) : _value(value)
        {
            cout << "Foo(" << _value << ")" << endl;
        }

    ~Foo(void)
        {
            cout << "~Foo(" << _value << ")" << endl;
        }

private:
    int _value;
};

int main(void)
{
    Foo v(0);

    Foo * p1 = new Foo(1);

    delete p1;
    p1 = 0;

    return 0;
}
