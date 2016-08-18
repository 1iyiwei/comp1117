/*
  employee.cc

*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee(void);
    Employee(const string name);
    virtual ~Employee(void) = 0;

    string Name(void) const;
    float Tax(const float ratio) const;
    virtual float Salary(void) const;

private:
    const string _name;
};

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(void);
    HourlyEmployee(const string name, const float hour, const float rate);
    ~HourlyEmployee(void);

    float Salary(void) const;

private:
    float _hour;
    float _rate;
};

class FixedEmployee : public Employee
{
public:
    FixedEmployee(void);
    FixedEmployee(const string name, const float salary);
    ~FixedEmployee(void);

    float Salary(void) const;

private:
    float _salary;
};

Employee::Employee(void) : _name("Nameless")
{
    cout << "Employee::Employee(" << _name << ")" << endl;
}

Employee::Employee(const string name) : _name(name)
{
    cout << "Employee::Employee(" << _name << ")" << endl;
}

Employee::~Employee(void)
{
    // delete dynamic memory here if necessary
    cout << "Employee::~Employee(" << _name << ")" << endl;
}

string Employee::Name(void) const
{
    return _name;
}

float Employee::Tax(const float ratio) const
{
    return ratio*Salary();
}

float Employee::Salary(void) const
{
    return 0;
}

HourlyEmployee::HourlyEmployee(void) : _hour(0), _rate(0)
{
    cout << "HourlyEmployee::HourlyEmployee(" << Name() << ", " << _hour << ", " << _rate << ")" << endl;
}

HourlyEmployee::HourlyEmployee(const string name, const float hour, const float rate) : Employee(name), _hour(hour), _rate(rate)
{
    cout << "HourlyEmployee::HourlyEmployee(" << Name() << ", " << _hour << ", " << _rate << ")" << endl;
}

HourlyEmployee::~HourlyEmployee(void)
{
    cout << "HourlyEmployee::~HourlyEmployee("  << Name() << ", " << _hour << ", " << _rate << ")" << endl;
}

float HourlyEmployee::Salary(void) const
{
    return _hour*_rate;
}

FixedEmployee::FixedEmployee(void) : _salary(0)
{
    cout << "FixedEmployee::FixedEmployee(" << Name() << ", " << _salary << ")" << endl;
}

FixedEmployee::FixedEmployee(const string name, const float salary) : Employee(name), _salary(salary)
{
    cout << "FixedEmployee::FixedEmployee(" << Name() << ", " << _salary << ")" << endl;
}

FixedEmployee::~FixedEmployee(void)
{
    cout << "FixedEmployee::~FixedEmployee(" << Name() << ", " << _salary << ")" << endl;
}

float FixedEmployee::Salary(void) const
{
    return _salary;
}

int main(void)
{
    Employee *p_fixed = new FixedEmployee("John", 60);
    Employee *p_hourly = new HourlyEmployee("Mike", 10, 8);

    const float tax_rate = 0.1;

    cout << p_fixed->Name() << " : salary " << p_fixed->Salary() << " : tax " << p_fixed->Tax(tax_rate) << endl;
    cout << p_hourly->Name() << " : salary " << p_hourly->Salary() << " : tax " << p_hourly->Tax(tax_rate) << endl;
    
    delete p_fixed; p_fixed = 0;
    delete p_hourly; p_hourly = 0;

    FixedEmployee no_name;

    return 0;
}
