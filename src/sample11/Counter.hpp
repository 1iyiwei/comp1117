#ifndef _COUNTER_H
#define _COUNTER_H

#include <iostream>
#include <climits>
using namespace std;

class Counter
{
public:
    Counter(void);
    Counter(int value);

    void initialize(void);
    bool increment(void);
    bool decrement(void);
    int value(void);

private:
    int _value;
};

// methods

Counter::Counter(void)
{
    _value = 0;
}

Counter::Counter(int value)
{
    _value = value;
}

void Counter::initialize(void)
{
    _value = 0;
}

bool Counter::increment(void)
{
    if(_value < INT_MAX)
    {
        _value++;
        return true;
    }
    else
    {
        return false;
    }
}

bool Counter::decrement(void)
{
    if(_value > INT_MIN)
    {
        _value--;
        return true;
    }
    else
    {
        return false;
    }
}

int Counter::value(void)
{
    return _value;
}

#endif
