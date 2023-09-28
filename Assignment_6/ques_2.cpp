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
    Employee()
    {
        this->id = 0;
        this->sal = 0;
    }
    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }
    int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    float get_sal()
    {
        return this->sal;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    void accept()
    {
        cout << endl
             << "Enter id = ";
        cin >> this->id;
        cout << "Enter salary = ";
        cin >> this->sal;
    }
    void display()
    {

        cout << "ID = " << this->id << endl;
        cout << "Salary = " << this->sal << endl;
    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        this->bonus = 0;
    };
    Manager(int id, float sal, float bonus) : Employee(id, sal)
    {
        this->bonus = bonus;
    }
    float get_bonus()
    {
        return this->bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        Employee::accept();
        cout << "Enter bonus = ";
        cin >> this->bonus;
    }
    void display()
    {
        Employee::display();
        cout << "Bonus = " << this->bonus << endl;
    }

protected:
    void accept_manager()
    {
        cout << "Enter bonus = ";
        cin >> this->bonus;
    }
    void display_manager()
    {

        cout << "Bonus = " << this->bonus << endl;
    }
};
class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        this->comm = 0;
    };
    Salesman(int id, float sal, float comm) : Employee(id, sal)
    {
        this->comm = comm;
    }
    float get_comm()
    {
        return this->comm;
    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        accept();
        cout << "Enter Commission = ";
        cin >> this->comm;
    }
    void display()
    {
        display();
        cout << "comm = " << this->comm << endl;
    }

protected:
    void accept_salesman()
    {
        cout << "Enter Commission = ";
        cin >> this->comm;
    }
    void display_salesman()
    {
        cout << "comm = " << this->comm << endl;
    }
};

class sales_manager : public Manager, public Salesman
{

public:
    sales_manager()
    {
    }
    sales_manager(int id, float sal, float bonus, float comm) : Manager(id, sal, bonus), Salesman(id, sal, comm)
    {
    }
    void accept_sales_manager()
    {

        Manager::accept();
        Salesman::accept_salesman();
    }
    void display_sales_manager()
    {
        Manager::display();
        Salesman::display_salesman();
    }
};

int main()
{
    sales_manager sm1;
    sm1.accept_sales_manager();
    sm1.display_sales_manager();
    return 0;
}
