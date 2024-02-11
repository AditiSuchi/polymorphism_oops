#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base class print function" << endl;
    }
};

class Derived : public Base
{
public:
    // Overrides the print function of the base class
    void print() override
    {
        cout << "Derived class print function" << endl;
    }
};

int main()
{
    Base *ptr = new Derived();
    ptr->print(); // Calls the print function of Derived class
    delete ptr;
    return 0;
}
