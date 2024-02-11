#include <iostream>
using namespace std;
// Base class
class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}

    // Virtual function for calculating wages
    virtual float calculateWages() = 0;

    // Getter method for name
    string getName() {
        return name;
    }
};

// Derived class for salaried employees
class SalariedEmployee : public Employee {
private:
    float salary;

public:
    SalariedEmployee(string n, int i, float s) : Employee(n, i), salary(s) {}

    // Override calculateWages() method for salaried employees
    float calculateWages() override {
        return salary;
    }
};

// Derived class for hourly employees
class HourlyEmployee : public Employee {
private:
    float hourlyRate;
    float hoursWorked;

public:
    HourlyEmployee(string n, int i, float rate, float hours) : Employee(n, i), hourlyRate(rate), hoursWorked(hours) {}

    // Override calculateWages() method for hourly employees
    float calculateWages() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    // Create objects of SalariedEmployee and HourlyEmployee
    SalariedEmployee salariedEmp("John Doe", 101, 5000);
    HourlyEmployee hourlyEmp("Jane Smith", 102, 15, 40);

    // Polymorphic behavior: Using base class pointer
    Employee* emp1 = &salariedEmp;
    Employee* emp2 = &hourlyEmp;

    // Calculate wages using polymorphism
    cout << "Wages for " << emp1->getName() << ": $" << emp1->calculateWages() << endl;
    cout << "Wages for " << emp2->getName() << ": $" << emp2->calculateWages() << endl;

    return 0;
}
