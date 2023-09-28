/*********************************** ASSIGNMENT 6 QUESTION 2 ************************************/

// Q2. Implement following classes. Test all functionalities in main() of each created class.
//     Note that employee is inherited into manager and salesman.
//     Insted of char[] use string datatype.

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;

public:
    Employee();
    ~Employee();
};
class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager();
    ~Manager();
};
class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman();
    ~Salesman();
};

class sales_manager : public Manager, Salesman
{

public:
    sales_manager();
    sales_manager();
};

int main()
{
    return 0;
}